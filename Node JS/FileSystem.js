//1. Reading a file in Synchronous and asynchronous mode Difference
// var fs = require("fs");
// fs.readFile('input.txt',function(err,data){
//     if(err) {
//         return console.error(err);
//     }
//     console.log("Asynchronous read: "+data.toString());
// });
// var data =fs.readFileSync('input.txt');
// console.log("Synchronous read: "+data.toString());
// console.log("Program Ended");

//2.  "r+ is reading in Asyschronous mode"
// var fs = require("fs");
// fs.open('input.txt','r+',function(err,data){
//     if(err) {
//         return console.error(err);
//     }
//     console.log("File Opened Successfully!");
// });

//3. File Stats
// var fs = require("fs");
// fs.stat('input.txt',function(err,stats){
//     if(err) {
//         return console.error(err);
//     }
//     console.log("Got file info Sucessfully");
//     console.log("isFile ?" + stats.isFile());
//     console.log("isDirectory ? " + stats.isDirectory());
// });

//4. Writing in File

// var fs = require("fs");
// console.log("Going to write into existing file");
// fs.writeFile('input.txt','Simply Easy Learning!',function(err,data){//Simply Easy Learning is written in the file
//     if(err){
//         return console.error(err);
//     }
//     console.log("Data written Succcessfully!");
//     console.log("Let's read newly written data");
//     fs.readFile('input.txt',function(err,data){
//        if(err){
//            return console.error(err);
//        }
//        console.log("Asynchronous read: "+data.toString());
//     });
//
// });

// 4. Writing a File Using Buffer
// var fs = require("fs");
// var buf = new Buffer.alloc(1024);
// fs.open('input.txt','r+',function(err,fd){
//     if(err) {
//         return console.error(err);
//     }
//     console.log("File Opened Successfully!");
//     console.log("Going to read the file");
//     fs.read(fd,buf,0,buf.length,0,function(err,bytes){
//        if(err){
//            console.log(err);
//        }
//        console.log(bytes + " bytes read");
//        if(buf >0){
//            console.log(buf.slice(0,bytes).toString());
//         }
//        fs.close(fd,function(err){
//            if(err){
//                console.log(err);
//            }
//            console.log("File closed Successfully");
//        });
//     });
// });

//Truncating a File data
// var fs = require("fs");
// var buf = new Buffer.alloc(1024);
// fs.open('input.txt','r+',function(err,fd){
//     if(err) {
//         return console.error(err);
//     }
//     console.log("File Opened Successfully!");
//     console.log("Going to truncate the file after 10 bytes");
//     fs.ftruncate(fd,10,function(err)
//     {
//     if(err){
//         console.log("File truncated successfully");
//     }
//     console.log("File Truncated Successfully");
//     console.log("Going to read the file");
//         fs.read(fd,buf,0,buf.length,0,function(err,bytes){
//             if(err){
//                 console.log(err);
//             }
//             console.log(bytes + " bytes read");
//             if(buf >0){
//                 console.log(buf.slice(0,bytes).toString());
//             }
//             fs.close(fd,function(err){
//                 if(err){
//                     console.log(err);
//                 }
//                 console.log("File closed Successfully");
//             });
//         });
//     });
// });

//Makeing directory
// var fs= require("fs");
// console.log("Going to create directory C:/Users/Ayush Kumar/Documents/Coding/Node JS/tmp");
// fs.mkdir('C:/Users/Ayush Kumar/Documents/Coding/Node JS/tmp',function(err){
//    if(err){
//        return console.error(err);
//    }
//    console.log("Directory created Successfully!");
// });

// Reading Directory

// var fs= require("fs");
// console.log("Going to create directory C:/Users/Ayush Kumar/Documents/Coding/Node JS/");
// fs.readdir('C:/Users/Ayush Kumar/Documents/Coding/Node JS/',function(err,files){
//     if(err){
//         return console.error(err);
//     }
//     files.forEach(function(file){
//        console.log(file);
//     });
// });

//Removing Director fs.rmdir and Removing file fs.unlink
// var fs= require("fs");
// console.log("Going to create directory C:/Users/Ayush Kumar/Documents/Coding/Node JS/");
// fs.rmdir('C:/Users/Ayush Kumar/Documents/Coding/Node JS/tmp',function(err,files){
//     if(err){
//         return console.error(err);
//     }
//     console.log("Directory is removed Successfully");
// });