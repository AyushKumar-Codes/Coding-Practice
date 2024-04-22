var http =require('http');
var dt = require('./myfirstm');

http.createServer(function (req,res){
    res.writeHead(200,{'Content-Type':'text/html'});
    res.write("The data and time is currently : "+dt.myDateTime());
    res.end();
}).listen(8080);