const express = require('express');
const socketIO = require('socket.io');
const mongoose = require("mongoose");
const app = express();
app.use(express.static("./"));
mongoose.connect("mongodb://localhost:27017/MSG").then(() => console.log("MongoDB Connected")).catch((err) => console.log(err));
const userSchema = new mongoose.Schema({
    msg : {type : String}
});
const msg = mongoose.model("msg", userSchema);
const server = app.listen(8000,()=>{
    console.log("Server Started at 8000");
})
const io = socketIO(server);
app.get("/" ,(req,res)=>{
    res.sendFile("ETP1.html",{root:"./"});
})
io.on('connection',(socket)=>{
    console.log("A user has connected to server");
    socket.on('msg', async (data)=>{
            const addmsg = await msg.create({
                msg: data
            });
    console.log(data);
    })
});

