const express = require('express');
const app = express();
app.use(express.urlencoded({extended:true}));
const reqfunction =app.use((req, res,next)=>{
    console.log(`Receive a ${req.method} request to ${req.url}`);
    next();
});
const fromDataFunction= app.use ( (req,res,next)=>{
   console.log("Middleware 2");
   next();
});
app.get("/",(req,res)=>{
   res.send("This is home page") ;
});
app.listen(8000,()=>{
   console.log("Server running at 8000")
});