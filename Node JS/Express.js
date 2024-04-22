// var express =require('express');
// var app = express();
// app.get('/',function (req,res){
//     res.send('Hello World');
// });

// var server = app.listen(8081,function(){
//    var host = server.address().address;
//    var port = server.address().port;
//    console.log("Example app listening ar http://%s:%s",host,port);
//
// });

// var express = require('express');
// var app = express();
// app.get('/' , function (req,res){
//     console.log("Got a GET request for the homepage");
//     res.send('Hello GET');
// })
// app.post('/',function(req,res){
//     console.log("Got a POST request for the homepage");res.send('Hello POST');
// })
// app.delete('/del_user',function(req,res){
//     console.log("Got a DELETE request for /del_user");
//     res.send('Hello Delete');
// })
//
// app.get('/list_user',function(req,res){
//     console.log("Got a GET request for /list_user");
//     res.send('Page Listing');
// })
//
// app.get('/ab*cd',function(req,res){
//     console.log("Got a Get request for /ab*cd");
//     res.send('Page Pattern Match');
// })
//
// var server = app.listen(8081,function() {
//     var host = server.address().address;
//     var port = server.address().port;
//     console.log("Example app listening at https://%s:%s",host,port)
// })

const express = require ('express');
const app = express ();
const port = 8098;
app.use((req,res,next)=>{
    res.setTimeout(2000,()=>{
        console.log('Request has timed out.');
        res.sendStatus(408);
    });
    next();
})
app.get('/' , (req,res)=>{

});
app.listen(port, ()=>{
   console.log(`Listening  on port ${port}`)
});