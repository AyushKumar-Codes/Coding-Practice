const EventEmmiter = require("events");
const express = require("express");
const fs = require("fs");
const event = new EventEmmiter();
let data;
let name;
const app = express();
event.on("writeFile",()=>{
    fs.writeFile("./test.txt","Hello world",(err)=>{
        if(err){
            console.log(err);
        }
        else{
            console.log("File written");
        }
    })
});
event.on("renameFile",()=>{
    fs.rename("./test.txt",name,(err)=>{
        if(err){
            console.log(err);
        }
        else{
            console.log("File Renamed");
        }
    });
});
app.get("/:data",(req,res)=>{
    data = req.params.data;
    res.send("File written");
    event.emit("writeFile");
})
app.get("/rename/:name",(req,res)=>{
   name = req.params.name;
   res.send("File Renamed");
   event.emit("renameFile")
});
app.listen(8000);