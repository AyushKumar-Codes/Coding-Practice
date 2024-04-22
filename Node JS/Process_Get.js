// const express = require("express");
// var app = express();
// app.use(express.static('public'));
//
// app.get('/abc.html' , function(req,res){
//     res.sendFile( __dirname + "/" + "abc.html");
// })
//
// app.get('/process_get',function(req,res){
//     response = {
//         first_name:req.query.first_name,
//         last_name:req.query.last_name
//     }
//     console.log(response);
//     res.end(JSON.stringify(response));
// })
// var server = app.listen(8081,function (){
//     var host = server.address().address
//     var port = server.address().port
//     console.log("Example app listening at http://%s:%s",host,port)
// })

// Example 2
//Post

// var express = require('express');
// var app = express();
// app.get('/abc.html',function (req,res) {
//     res.send('<p>Username: ' + req.query['first_name']+' </p> <p>Lastname:' + req.query['last_name']+ ' </p>');
// })
//
// var server  =app.listen(8080,function(){
//   var host = server.address().address;
//   var port = server.address().port;
//   console.log("Example app listening at http://%s:%s",host,port);
// })

//Body-Praser

// var express = require('express');
// var app = express();
// var bodyParser = require('body-parser');
// var urlencodedParser = bodyParser.urlencoded({extended:false})
//
// app.use(express.static('public'));
// app.get('/abc.html' , function (req,res){
//    res.sendFile(__dirname + "/" + "indexpost.html");
// })
// app.post('/process_post',urlencodedPraser,function(req,res){
//
// })