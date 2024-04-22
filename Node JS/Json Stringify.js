// Reading JavaSrcipt object from Json file

// const fs =  require('fs');
// fs.readFile('student.json',(err,data)=>{
//    if(err) throw err;
//    let student = JSON.parse(data);
//    console.log(JSON.stringify(student,null,10));
//    console.log(student);
// });

//Reading JavaScript object from variable and writting in a JSON file

// const fs=require('fs');
// let student = {
//     vechile : 'Car',
//     department : 'English',
//     car : 'Honda'
// };
//
// let data = JSON.stringify(student,null,10);
// fs.writeFile('student-1.json',data,(err)=>{
//    if (err) throw err;
//    console.log("Data written in the file");
// });

//Synchronous Method to write in a JSON file

// const fs=require('fs');
// let student = {
//     vechile : 'Car',
//     department : 'English',
//     car : 'Honda'
// };
//
// let data = JSON.stringify(student,null,10);
// fs.writeFileSync('student-1.json',data,(err)=>{
//
// });

// Assign a task : Parse a JSON file  , modify its content , and save the changes.
//Assign a task: Compress a file , decompress it , and compare the sizes