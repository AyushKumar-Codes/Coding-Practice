const mongoose = require("mongoose");
const express = require("express");
const app = express();
const bodyParser = require("body-parser");
const path = require("path");
const fs = require("fs");
const publicPath = path.join(__dirname, 'LearningMongoDB');
app.use(bodyParser.urlencoded({extended: true}));
app.use(express.static(publicPath));


mongoose.connect("mongodb://localhost:27017/LPUInternet").then(() => console.log("MongoDB Connected")).catch((err) => console.log(err));
const userSchema = new mongoose.Schema({
    LPU_ID: {
        type: String,
        require: true
    },
    LPU_Password: {
        type: String,
        require: true
    }
}, {timestamps: true});
const user = mongoose.model("users", userSchema);
app.get("/", (req, res) => {
    // res.sendFile('MongoDB.html',{root : "./LearningMongoDB"});//We can use this traditional method also
    res.sendFile('MongoDB.html', {root: publicPath});
});
app.post("/", async (req, res) => {
    let result = await user.create({
        LPU_ID: req.body.username,
        LPU_Password: req.body.password
    })
    console.log("Added : " + result);
    res.sendFile('24Online Client.html', {root: publicPath});
});
app.get("/delete/:n", async (req, res) => {
    const n = req.params.n;
    const result = await user.deleteOne({LPU_ID: n});
    if (result.deletedCount === 1) {
        res.send("<center><h1 style='color: #0a58ca;'>User Deleted</h1></center>");
    } else {
        res.send("<center><marquee><h1 style='color: #860934;'>User not Found</h1></marquee></center>");
    }
});
app.get("/find/:n", async (req, res) => {
    const n = req.params.n;
    const result = await user.find({LPU_ID: n})
    if(result && result.length>=1){
        res.send(`Result Found : ${JSON.stringify(result)}`)
    }
    else{
        res.send("<center><marquee><h1 style='color: #860934;'>User not Found</h1></marquee></center>");
    }
});
app.get("/users", async (req, res) => {
    const allUser = await user.find({});
    const html = `<ul>
   ${allUser.map((user) => `<li>User_ID : ${user.LPU_ID} , User_Password : ${user.LPU_Password}</li>`).join("")}
   </ul>
   `;
    res.send(html);
});
app.get("/update",async (req , res)=>{
    res.sendFile("update.html",{root:publicPath});
});
app.post("/update", async(req,res)=>{
   const id = req.body.LPU_ID;
   const result = await user.updateOne({LPU_ID: id},{$set:{LPU_Password:req.body.LPU_Password}});
    if (result.modifiedCount === 1) {
        res.send("<center><h1 style='color: #0a58ca;'>User Updated</h1></center>");
    } else {
        res.send("<center><marquee><h1 style='color: #860934;'>User not Found</h1></marquee></center>");
    }
});
app.listen(8000, () => {
    console.log("Listening server at port : 8000")
});