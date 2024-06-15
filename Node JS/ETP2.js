const fs = require("fs");
fs.readFile("./test.txt",(err,data)=>{
    if(err){
        console.log(err);
    }
    else{
        console.log(data.toString());
    }
})
fs.writeFile("./test.txt",("Hello from Server"),(err)=>{
    if(err){
        console.log(err);
    }
    else{
        console.log("File Written");
    }
})