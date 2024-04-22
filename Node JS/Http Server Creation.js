// var http = require('http');
// var fs = require('fs');
// http.createServer(function(req,res){
//    fs.readFile('input.txt',function(err,data){
//        res.writeHead(200,{'Content-Type':'text/html'});
//        res.write(data);
//        return res.end();
//    })
// }).listen(8080);


// var http = require ('http');
// http.createServer(function(req,res){
//     res.writeHead(200,{'Content-Type':'text/html'});
//     res.write(req.url);
//     res.end();
// }).listen(8080);


// var http = require ('http');
// var server =  http.createServer(function(req,res){
//     res.writeHead(200,{'Content-Type':'text/html'});
//     if(req.url == '/'){
//         res.write('welcome to Index Page');
//         res.end();
//     }
//     else if(req.url == "/emp"){
//         res.write('Welcome to Employees page');
//         res.end();
//     }
//     else if(req.url == "/admin"){
//         res.write('Welcome to Admin page');
//         res.end();
//     }
//     else{
//         res.end('Invalid Request!');
//     }
// });
// server.listen(8080);


// console.log("The given URL -");
// const myURL = new URL("https://www.w3schools.com/nodejs/");
// console.log(myURL.href);
// console.log(myURL.hostname);
// console.log(myURL.pathname);

// var url = require ('url');
// var adr = 'https://www.w3schools.com/nodejs/';
// var q = url.parse(adr,true);
// console.log(q.host);
// console.log(q.pathname);
// console.log(q.search);
// var qdata = q.query;
// console.log(qdata.month);

// var http =require('http');
// var url = require ('url');
// var fs = require('fs');
// http.createServer(function (req,res){
//     var q = url.parse(req.url,true);
//     var filename = "."+q.pathname;//First Create html file then write it name after localhost:8080/abc.html
//     fs.readFile(filename,function(err,data){
//         if(err){
//             res.writeHead(404,{'Content-Type':'text/html'});
//             return res.end("404 Not Found");
//         }
//         res.writeHead(200,{'Content-Type':'text/html'});
//         res.write(data);
//         return res.end();
//     });
// }).listen(8080);


// const http = require('http');
// const url = require('url');
//
// // Creating a server instance
// const server = http.createServer((req, res) => {
//     // Setting response headers
//     res.writeHead(200, {'Content-Type': 'text/html'});
//
//     // Parsing the URL to get query parameters
//     const q = url.parse(req.url, true).query;
//
//     // Extracting values from query parameters
//     const txt = q.year + ' ' + q.month;
//
//     // Sending response
//     res.end(txt);
// });
//
// // Start listening on port 8080
// server.listen(8080, () => {
//     console.log("Server is running on port 8080");
// });
