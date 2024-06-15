const fs = require("fs");

// Write data to 'test.txt'
const data = 'This is node.js Class';
const writer = fs.createWriteStream('test.txt');
writer.write(data, 'UTF8');
writer.end();
writer.on('finish', function () {
    console.log("Write completed");
});

// Read data from 'input.txt'
let readData = '';
const reader = fs.createReadStream('input.txt');

// Handle data chunks
reader.on('data', function (chunk) {
    readData += chunk;
});

// Handle end of data
reader.on('end', function () {
    console.log("Read data from 'input.txt':", readData);
});

// Handle errors
reader.on('error', function (err) {
    console.error("Error reading 'input.txt':", err);
});
