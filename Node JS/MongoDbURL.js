const mongoose = require("mongoose");
mongoose.connect("mongodb://localhost:27017")
.then(()=>{
    console.log("connection sucessfull")
})
.catch((err)=>{
    console.log(`No Connection ${err}`);
})