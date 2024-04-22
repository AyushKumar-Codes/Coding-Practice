const express = require("express");
const socketIO = require("socket.io");
const app = express();
const server = app.listen(8000,()=>{
    console.log("Listening Server at 8000");
});
const io = socketIO(server);

io.on("connection",(socket)=>{
   console.log("user connected");
   socket.emit("stat","Connected");//This will sent to itself only
   socket.on("Chat Message",mess=>{
       console.log("Message Recived",mess);
      io.emit("Message",mess) ;//This will broadcast to all
   });
});
app.get("/",(req,res)=>{
    res.sendFile("LearningSocket.html",{root : "./"});
});

