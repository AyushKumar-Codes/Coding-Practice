var fs = require("fs");
var data='This is node.js Class';
var writer = fs.createWriteStream('input.txt');
var reader =fs.createReadStream('input.txt');
writer.write(data,'UTF8');
writer.end();
writer.on('finish',function(){
    console.log("Write completed")
});
var data='';
reader.on('',function(chunk){
   data=chunk;
});
reader.on('end',function(err){
    console.log(data);
});

writer.on('error',function (err){
    console.error(err);
});