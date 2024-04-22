var express= require("express");
var cookieParser = require('cookie-parser');
var app = express();
app.use(cookieParser());
app.get('/cookieset',function(req,res){
   res.cookie('cookie_name','cookie_value');
   res.cookie('company','LPU');
   res.cookie('name','Ayush');
});
app.get('/cookieget',function(req,res){
   res.status(200).send(req.cookies);
});

app.get('/',function(req , res){
   res.status(200).send('Welcome to LPU!');
});
var server = app.listen(8000,function(){
    var host = server.address().address;
    var port = server.address().port;
    console.log('Example app listening ar https://%s:%s',host,port)
});