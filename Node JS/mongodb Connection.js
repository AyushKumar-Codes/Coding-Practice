const express = require ("express")
const app = express();
const Student1=require("./MongoDbURL");
app.get("/",(req,res)=>{
    res.send("Connection Established");
})

app.listen(3000);