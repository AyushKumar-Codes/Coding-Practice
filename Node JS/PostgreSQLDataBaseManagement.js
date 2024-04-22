const express = require("express");
const {Pool} = require("pg");
const app = express();
const port = 3000;
const pool = new Pool({
    user: 'postgres',
    host: 'localhost',
    database: 'postgres',
    password:'root',
    port: 5432,
});
app.use(express.json());
app.get('/todos', (req, res) => {
    pool.query('SELECT * FROM todos', (error, result) => {
        if (error) {
            console.log('Error fetching todos', error);
            res.status(500).json({error: 'Internal Server error'});
        } else {
            res.json(resul.rows);
        }

    });
});
