const express = require("express");
const Socketio = require("socket.io");
const app = express();
app.use(express.static("./"));
const server = app.listen(8000,(err)=> {
    if (err) {
        console.log(err);
    } else {
        console.log("Server running At 8000");
    }
})
const io = Socketio(server);
app.get("/",(req,res)=>{
   res.sendFile("./SocketServerReplyInInterval.html",{root:"./"});
});
io.on("connection",(socket)=>{
   socket.on("ServerReply",(data)=>{
       let replyCount = 0;
      const interval =  setInterval(()=>{
           replyCount++;
           if(replyCount%2==0) {
               socket.emit("ServerReply", "wowServer")
           }
           if(replyCount>12){
               clearInterval(interval);
           }

       },1000);

   })
    socket.on("clientReply",(data)=>{
       console.log(data);
    });
});