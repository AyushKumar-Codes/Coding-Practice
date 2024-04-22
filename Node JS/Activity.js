// const fs = require('fs');
//
// // File path
// const filePath = 'example.txt';
//
// // Read file asynchronously
// fs.readFile(filePath, 'utf8', (err, data) => {
//     if (err) {
//         console.error('Error reading file:', err);
//         return;
//     }
//
//     // Modify the content (for example, let's just append some text)
//     const modifiedData = data + '\nAppended content!';
//
//     // Write the modified content back to the file
//     fs.writeFile(filePath, modifiedData, 'utf8', (err) => {
//         if (err) {
//             console.error('Error writing file:', err);
//             return;
//         }
//         console.log('File modified successfully!');
//     });
// });
//
// // assign a task use buffers to read and write binary data from/to a file in javascript
//
// const fs = require('fs');
//
// // File path
// const filePath = 'binaryFile.bin';
//
// // Create a buffer to write
// const bufferToWrite = Buffer.from('Hello, this is binary data!', 'utf8');
//
// // Write binary data to a file asynchronously
// fs.writeFile(filePath, bufferToWrite, (err) => {
//     if (err) {
//         console.error('Error writing file:', err);
//         return;
//     }
//     console.log('Binary data has been written to the file successfully!');
// });
//
// // Read binary data from a file asynchronously
// fs.readFile(filePath, (err, data) => {
//     if (err) {
//         console.error('Error reading file:', err);
//         return;
//     }
//
//     // Convert the buffer to a string for demonstration
//     const binaryDataAsString = data.toString('utf8');
//
//     console.log('Binary data read from the file:', binaryDataAsString);
// });



// //Q1
//
// const http = require('http');
// const url = require('url');
//
// const server = http.createServer((req, res) => {
//     // Parse the request URL
//     const parsedUrl = url.parse(req.url, true);
//
//     // Get the path and query string parameters
//     const path = parsedUrl.pathname;
//     const query = parsedUrl.query;
//
//     // Handle different URL paths
//     switch (path) {
//         case '/':
//             res.writeHead(200, { 'Content-Type': 'text/plain' });
//             res.end('Home Page');
//             break;
//         case '/about':
//             res.writeHead(200, { 'Content-Type': 'text/plain' });
//             res.end('About Page');
//             break;
//         case '/contact':
//             res.writeHead(200, { 'Content-Type': 'text/plain' });
//             res.end('Contact Page');
//             break;
//         default:
//             res.writeHead(404, { 'Content-Type': 'text/plain' });
//             res.end('Page Not Found');
//     }
// });
//
// const PORT = process.env.PORT || 3000;
//
// server.listen(PORT, () => {
//     console.log(`Server is running on port ${PORT}`);
// });
//
//
// // Q2
//
// const http = require('http');
//
// const server = http.createServer((req, res) => {
//     // Handle GET requests
//     if (req.method === 'GET') {
//         res.writeHead(200, { 'Content-Type': 'text/plain' });
//         res.end('GET request received');
//     }
//     // Handle POST requests
//     else if (req.method === 'POST') {
//         res.writeHead(200, { 'Content-Type': 'text/plain' });
//         res.end('POST request received');
//     }
//     // Handle other request types
//     else {
//         res.writeHead(405, { 'Content-Type': 'text/plain' });
//         res.end('Method Not Allowed');
//     }
// });
//
// const PORT = process.env.PORT || 3000;
//
// server.listen(PORT, () => {
//     console.log(`Server is running on port ${PORT}`);
// });
//
//
//
