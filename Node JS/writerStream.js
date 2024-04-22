var fs = require('fs');
var data='This is node.js Class';
var writer = fs.createWriteStream('input.txt');

writer.setEncoding(data,'UTF8');
writer.end();
writer.on('finish',function(){
    console.log("Write completed")
});
writer.on('error',function(err){
    console.error(err);
});