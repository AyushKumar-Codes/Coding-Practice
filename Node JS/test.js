// var a="Ayush";
// var reva ="";
// for(var i=a.length-1;i>=0;i--){
//     reva+=a[i];
// }
//
// console.log(reva);


// var a = [1,2,3,4,5];
// for(var i=0; i<a.length ; i++)
// {
//     console.log(a[i]);
// }


// var age =15;
// if(age>=18){
//     console.log("He is elegible for vote");
// }
// else{
//     console.log("He is not elegible for vote");
// }
// var i=1;
// do{
//     console.log(i);
// }
// while(i++<=10)


// var a = [1,2,34,4];
// for(var i in a ){
//     console.log(a[i]);
//

// var a = new Date();

// const str = "Hello, World!";
//
// // Slicing from the end
// const sliced1 = str.slice(-1); // "World!"
// const sliced2 = str.slice(-6, -1); // "World"
// const sliced3 = str.slice(-13, -8); // "Hello"
//
// console.log(sliced1);
// console.log(sliced2);
// console.log(sliced3);


// var a = [2341,2,3,4,5];
// a.forEach(function(e,i){
//     console.log(e+" => index : "+i);
// })


// const express = require("express");
// const fs = require("fs");
// const app = express();
// // app.use(()=>{
// //     console.log("Request made");
// // })
//
// fs.readFile("student.json",(err,data)=>{
//    if(err){
//        console.log(err);
//    }
//    else{
//    console.log(JSON.stringify(data));
//    };
// });

// app.listen(8000);


// const fs = require("fs");


// fs.readFile("./student.json", (err, data) => {
//     if (err) {
//         console.error(err);
//     } else {
//         const student = JSON.parse(data.toString());
//         console.log(student.name);
//     }
//
// });

// const s = fs.readFileSync("text.txt");
// console.log(s.toString());

// const obj = {
//     name: "Ayush",
//     age: 12,
//     rollno: 9
// };
// fs.writeFile("student.json", (JSON.stringify(obj)), (err) => {
//     if (err) {
//         console.log(err);
//     } else {
//         console.log("File Written", JSON.stringify(obj));
//     }
// })

// fs.readFile("student.json" , (err,data)=>{
//     if(err){
//         console.log(err);
//     }
//     else{
//         const student = JSON.parse(data);
//         console.log(student.name);
//     }
// })

// const fs = require("fs");
// let users;
// let newusers = [];
// fs.readFile("BodoDatabase23ed.json",(err, data)=>{
//     if(err){
//         console.log(err);
//     }
//     else{
//         users = JSON.parse(data) ;
//         for(let i = 0 ;i<users.length;i++){
//             newusers.push({
//                             role: "assistant",
//                             content: [
//                                 {
//                                     type: "text",
//                                     text: `In bodo ${users[i].Names} means = ${users[i].Meanings}`
//                                 }
//                             ]
//                         });
//             newusers.push({
//                             role: "user",
//                             content: [
//                                 {
//                                     type: "text",
//                                     text: `What is the meaning of ${users[i].Names}in bodo language?`
//                                 }
//                             ]
//                         });
//         }
//
// fs.writeFile("bodo.json",(JSON.stringify(newusers)),(err)=>{
//     if(err){
//         console.log(err);
//     }
// })
//     }
// });




const fs = require("fs");
let users;
let newusers = [];
fs.readFile("BodoDatabase23ed.json",(err, data)=>{
    if(err){
        console.log(err);
    }
    else{
        users = JSON.parse(data) ;
        for(let i = 0 ;i<users.length;i++){
            newusers.push({
                            output: `Meaning of Word ${users[i].Names}in Bodo Language is : ${users[i].Meanings}`,
                            input: `What is the meaning for the word ${users[i].Names}in Bodo Language`,
                            instruction : `Translate the given word (${users[i].Names}) to Bodo Language Which is the Language of Assam a Indian State`
                        });
        }

fs.writeFile("bodo.json",(JSON.stringify(newusers)),(err)=>{
    if(err){
        console.log(err);
    }
})
    }
});

