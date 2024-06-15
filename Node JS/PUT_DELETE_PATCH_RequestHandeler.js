const express = require("express");
const methodOverride = require("method-override")
const app = express();
app.listen(8000, (err) => {
    console.log("Server Running at 8000")
})
app.use(express.static("./"));
app.use(express.urlencoded({extended: true}));
app.use(methodOverride("_method"));
app.get("/", (req, res) => {
    res.sendFile("./PUT_PATCH_DELETERequest.html", {root: "./"});
})
app.route("/")
    .put((req, res) => {
        res.send("Put request Found");
        console.log(req.body);
    })
    .delete((req,res)=>{
        res.send("delete request Found");
        console.log(req.body);
    })
    .patch((req,res)=>{
        res.send("patch request Found");
        console.log(req.body);
    })