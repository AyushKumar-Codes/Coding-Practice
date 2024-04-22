var fs = require('fs');
// fs.writeFileSync("./FileHandeling.txt","My name is Ayush");
fs.appendFileSync("./FileHandeling.txt",`\n ${new Date().getDate().toLocaleString()} this is today's date`);//This to add new lines to the exiting file or it will recreate the new file if it does not exist
fs.appendFileSync("./FileHandeling.txt",`\n${Date.now()}  this the timestamp`);
const output = fs.readFileSync("./FileHandeling.txt","UTF-8");
console.log(output);
fs.appendFile("./FileHandeling.txt",`THis is asynchronous append`,(err) =>{
   if(err){
       console.log(err);
   }
   else{
       console.log("THe file is appended");
   }
});
fs.cpSync("./FileHandeling.txt","./CpFile.txt");
fs.readFile("./CpFile.txt","utf-8",(err,re)=>{
    if(err){
        console.log(err);
    }
    else{
        console.log("\n\n\nTHis is copied file:\n\n\n",re);
    }
})

fs.unlink("./CpFile.txt",(err)=>{
    if(err){
        console.log(err);
    }
    else{
        console.log("CpFile.txt Deleted");
    }
})

console.log(fs.statSync("./FileHandeling.txt"));

console.log(fs.statSync("./FileHandeling.txt").isFile());
fs.unlinkSync("./FileHandeling.txt");

