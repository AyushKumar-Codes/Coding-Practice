// chatbot.js

import {LlamaChatSession, LlamaModel, LlamaContext} from "node-llama-cpp";
import express from "express";
const app = express();
app.use(express.static("./Anthropic AI"));
const server = app.listen(8000, () => {
    console.log("listening at 8000")
});
const model = new LlamaModel({
    modelPath: "D:/GPT4ALL/Model/Meta-Llama-3-8B-Instruct.Q4_0.gguf"
});

const context = new LlamaContext({model});

const session = new LlamaChatSession({context});


const io = new Server(server);
app.get("/", (req, res) => {
    res.sendFile("AnthropicAI.html", {root: "./Anthropic AI"});
});

io.on("connection", (socket) => {
    socket.on("promt", async (data) => {
        console.log(data);
        const prompt = data;
        const reply = await session.prompt(prompt);
        console.log(reply);
        socket.emit("reply", reply);
    });
})



