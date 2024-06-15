// const express = require("express");
// const fs = require("fs");
// const bodyParser = require('body-parser');
// const app = express();
// app.use(bodyParser.urlencoded({ extended: true }));
// app.get("/",(req,res)=>{
//    res.send ("<center><h1>Hello its HomePage</h1></center>");
// });
// app.get("/signup",(req,res)=>{
//     fs.readFile("./abc.html",(err,data)=>{
//         if(err){
//             console.log(err);
//         }
//         res.setHeader("Content-Type" , "text/html");
//         res.send(data);
//     })
// });
// app.get("/get",(req,res)=>{
//     console.log("First name",req.query.first_name);//for GET method we can use req.query
//     console.log("Last name",req.query.last_name);
//     res.send(`This is a GET request for FirstName: ${req.query.first_name} and LastName: ${req.query.last_name}`);
// });
// app.post("/signup",(req,res)=>{
//     console.log("First name",req.body.first_name);//for post method we have to use req.body
//     console.log("Last name",req.body.last_name);
//     res.send(`This is a post request for FirstName: ${req.body.first_name} and LastName: ${req.body.last_name}`);
// })
// app.listen(8000,()=>{
//    console.log("Listening at 8000");
// });


const express = require("express");
const fs = require("fs");
const users = require("./MOCK_DATA.json");//This will make array of json entries
const bodyParser = require("body-parser");
// const {json} = require("express");
const app = express();
app.use(bodyParser.urlencoded({ extended: true }));
app.get("/",(req,res)=>{
    res.send("<center><h1>This is homepage</h1></center>");
});
app.get("/api/users",(req,res)=>{
    return res.json(users);
});
app.get("/users",(req,res)=>{
    const html = `<ul>
    ${users.map((user) => `<li>${user.first_name}</li>`).join("")}
    </ul>
    `;
    res.send(html);
});
app.get("/signup",(req,res)=>{

    fs.readFile("abc.html",(err,data)=>{
        if(err) {
            console.log(err);
        }
        res.setHeader("Content-Type" , "text/html");
        res.send(data);
    })
});
app.post("/signup",(req,res)=>{
    const  body =req.body;
    users.push(body);//we are pushing json
    fs.writeFile("./MOCK_DATA.json",JSON.stringify(users),(err,data)=>{
        if(err){
            console.log(err);
        }
        else{
            res.send(`<center></h1>${JSON.stringify(req.body)} is updated to the JSON Database</h1></center>`)
        }
    })
});
app.get("/find/:n",(req,res)=>{
    const n = req.params.n;
    const usr = users.find((user)=> user.first_name === n);
    if (usr) { // User found
        res.send(JSON.stringify(usr) + ".... is the search result");
    } else {
        res.status(404).send("User not found"); // Send a 404 Not Found response
    }
});
app.get("/delete/:n",(req,res)=>{ // here we can use app.delete  if this request is made from webpage
    const n = req.params.n;
    const usr = users.findIndex((user)=>user.first_name===n);
    if(usr>=0){
        users.splice(usr,1);
        fs.writeFile("./MOCK_DATA.json",JSON.stringify(users),(err,data)=>{
            if(err){
                console.log(err);
            }
            else{
                res.send("User Deleted");
            }
        });
    }
    else{
        res.send(usr+" User not found");
    }
});
app.post("/update/:n",(req,res)=> {// here we can use app.patch for updating the database
    const n = req.params.n;
    const usr = users.findIndex((user)=>user.first_name===n);
    if(usr>=0){
        users[usr] = {
            //write here what you have to update
        };
        fs.writeFile("./MOCK_DATA.json",JSON.stringify(users),(err,data)=>{
            if(err){
                console.log(err);
            }
            else{
                res.send("User Updated");
            }
        });
    }
    else{
        res.send(usr+" User not found");
    }
});
app.listen(8000,()=>{
    console.log("Server Running At port 8000");
});