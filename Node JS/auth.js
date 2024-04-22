const express = require('express');
const bodyParser = require('body-parser');
const session = require('express-session');
const app = express();
const port = 3000;

app.use(bodyParser.urlencoded({extended : true}));
app.use(bodyParser.json());
app.use(session({
    secret: 'your_secret_key',
    resave: false,
    saveUninitialized: true
}));

let users= [
    {id:1, username:'BP', password : 'password1'},
    {id:2, username:'LPU', password: 'password2'}
];

function authenticate(req, res, next){
    if(req.session && req.session.user){
        next();
    } else {
        res.redirect('/login');
    }
}

app.get('/logout', (req, res) => {
    req.session.destroy();
    res.redirect('/login');
});

app.get('/protected', authenticate, (req, res) => {
    res.send(`Welcome ${req.session.user.username}! This is a protected route.`);
});

app.get('/login', (req, res) => {
    // Add your login form or login API here
    res.send('Login page');
});

app.post('/login', (req, res) => {
    // Add your login logic here
    const {username, password} = req.body;
    const user = users.find(u => u.username === username && u.password === password);
    if(user) {
        req.session.user = user;
        res.redirect('/protected');
    } else {
        res.redirect('/login');
    }
});

app.listen(port, () => console.log(`App is running on port ${port}`));
