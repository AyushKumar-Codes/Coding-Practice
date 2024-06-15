
// Extract the first five characters
// const firstFive = myBuffer.slice(0, 5).toString();
//
// // Extract the last three characters
// const lastThree = myBuffer.slice(-3).toString();
//
// // Print the results
// console.log(`First five characters: ${firstFive}`);
// console.log(`Last three characters: ${lastThree}`);




const { Buffer } = require('buffer');
const inputString = 'This is nodejs ca';

const Buffer1 = Buffer.from(inputString);
var Buffer2 = Buffer.from(inputString);
Buffer2.copy(Buffer2);
console.log(Buffer1.equals(Buffer2))