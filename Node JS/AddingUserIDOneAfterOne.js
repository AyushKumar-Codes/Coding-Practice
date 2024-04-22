const express = require("express");
const mongoose = require("mongoose");
const app = express();

app.post("/login",(req,res)=>{
    let newUserId = 1; // Default starting ID
    if (lastUser) {
        newUserId = lastUser.User_ID + 1;
    }
});