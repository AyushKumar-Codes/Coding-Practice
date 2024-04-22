// const http = require("http");
// const fs = require ("fs");
// function getFormattedTime() {
//     return new Date().toLocaleTimeString("en-US", {
//         hour: "2-digit",
//         minute: "2-digit",
//         second: "2-digit",
//     });
// }
// const server  = http.createServer((req,res)=>{
//     console.log("A new request is recieved from client.");
//     // res.end(`Hello from server. ${req.url}`);
//     // const log = `\n${new Date().toLocaleDateString()} : Request came from ${req. url}`;
//     const log = `\n${getFormattedTime()} : Request came from ${req. url}`;
//     fs.appendFile("log.txt",log,(err,data)=>{
//         if(err){
//             console.log(err);
//         }
//         else{
//             console.log("Log appended");
//         }
//     })
//     switch (req.url){
//         case '/':
//             res.end("HomePage");
//             break;
//         case '/about':
//             res.end("about me");
//             break;
//         default:
//             res.end("404 ERROR");
//     }
// }).listen(8000,function(){
//     console.log("Server Started at port:8000")
// });

// server.listen(8000) //or we can use this method to create a local host

// Use of URL and queryparameter

// const http = require("http");
// const fs = require("fs");
// const url = require("url");
//
// const server = http.createServer((req,res)=>{
//     const myURL = url.parse(req.url);
//     const myURLwithQuery = url.parse(req.url,true);
//     if(myURL.pathname === "/favicon.ico") return res.end();
//     console.log("Path:",myURL.path);
//     console.log("Path:",myURL.pathname);
//     console.log(myURL);
//     console.log(myURLwithQuery);
//
//     switch (myURL.pathname){
//         case "/":
//             res.end("Homepage");
//             break;
//         case "/about":
//             res.end("about");
//             break;
//         case "/login":
//             if(myURLwithQuery.query.username){
//                 res.writeHead(200, {'Content-Type': 'text/html'});
//                 const usern = myURLwithQuery.query.username;
//                 res.write("Welcome "+usern+", You are logged IN")
//                 res.write("<center><h1 style='margin-top: 15%;'>Its Node js Practice</h1></center>");
//                 res.end();
//             }
//             else
//             res.end("Its login Page");
//             break;
//         case "/search":
//             if(myURLwithQuery.query.search_query){
//                 res.writeHead(200,{'content-type' : 'text/html'});
//                 res.write("<center><h1>you have searched : <u>"+myURLwithQuery.query.search_query+"</u> </h1></center>");
//                 res.end("<center style='font-size: xxx-large;color: cornflowerblue;'>Searching...</center>");
//             }
//             else {
//                 res.end("have you given any Search Query Parameters?");
//             }
//             break;
//         default:
//             res.end("404 error");
//     }
// });
// const port =8000;
// server.listen(port,()=>{
//     console.log(`Listening port at ${port}`)
// });

const http = require("http");
const url= require("url");
const fs = require("fs");
const server = http.createServer((req,res)=>{
    const myUrl = url.parse(req.url);
    if(myUrl.pathname==="/signup") {

        res.writeHead(200, {'content-type': 'text/html'});
    if(req.method==="POST"){
        // Here we can do any any data base related query

        res.write("Post request is recieved on this Signup Page");
        return res.end();
    }
    else if(myUrl.pathname==="/signup" && req.method==="GET") {
        res.write("Get request is recieved on this Signup Page<br><br>");

        fs.readFile("./abc.html", (err, data) => {
            if (err) {
                console.log(err);
            } else {
                res.write(data);
                res.end();
            }


        });
    }

    }
    else if(myUrl.pathname==="/"){
        res.writeHead(200, {'content-type': 'text/html'});
        res.write("<center><h1>This is a homepage page</h1></center>");
        res.end();
    }
    else{
        res.end("404 server")
    }
}).listen(8000,()=>{
    console.log("Server listening at 8000")
})