const express = require("Express");
const app = express();
app.use(express.urlencoded({extended:true}));
app.use(express.static("./"));
const { Pool } = require('pg');
const pool = new Pool({
    user: 'postgres',
    host: 'localhost',
    database: 'lpu',
    password: 'Ayush@123',
    port: 5432,
});
pool.query(`create table if not exists emails (
            email varchar(255),
            password varchar(255)
            );`);
app.get("/",(req,res)=>{
    res.sendFile("./PostGreSQLearning.html",{root:"./"});
});
app.post("/", async (req,res)=>{
    const email = req.body.email;
    const password = req.body.password;
    await pool.query(`insert into emails (email,password) values ($1,$2)`,[email,password]);
    res.send("<center><h1>Data Accepted</h1></center>");
});

app.get("/delete/:id",async (req,res)=>{
    const email = req.params.id;
    console.log(email);
    const queryResult = await pool.query('DELETE FROM emails WHERE email = $1', [email]);

    if (queryResult.rowCount > 0) {
        res.send('User deleted successfully');
    } else {
        res.send('User not found');
    }
});

app.get("/read/:email",async(req,res)=>{
   const email = req.params.email;
   const  result = await pool.query("Select * from emails where email = $1",[email]);
   if(result.rows.length>0){
       res.json(result.rows[0]);
   }
   else{
       res.send("User Not Found");
   }
});
app.get("/update",async (req,res) =>{
    res.sendFile("./PostGreSQLearning.html",{root:"./"});
});
app.post("/update",async(req,res)=>{
   const email = req.body.email;
   const password = req.body.password;
   const result = await pool.query("select * from emails where email = $1",[email]);
   if(result.rows.length>0){
       pool.query("update emails set password = $1 where email = $2",[password,email]);
       res.send("password Updated");
   }
   else{
       res.send("User not found");
   }
});
app.listen(8000,(err)=>{
    if(err){
        console.log(err);
    }
    else{
        console.log("Server Running At 8000")
    }
})