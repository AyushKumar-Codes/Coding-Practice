/*assign a task  write a simple nodejs script to connect to mongodb and perform a basic query.
assign a task write a nodejs script to interact with mongodb databases
*/



const { MongoClient } = require('mongodb');

// Connection URI
const uri = 'mongodb://localhost:27017';

// Database Name
const dbName = 'my_database';

// Connect to the MongoDB server
MongoClient.connect(uri, { useNewUrlParser: true, useUnifiedTopology: true }, (err, client) => {
    if (err) {
        console.error('Error connecting to MongoDB:', err);
        return;
    }

    console.log('Connected to MongoDB');

    const db = client.db(dbName);

    // Perform a basic query
    db.collection('my_collection').findOne({}, (err, result) => {
        if (err) {
            console.error('Error executing query:', err);
            return;
        }

        console.log('Query result:', result);

        // Close the connection
        client.close();
    });
});


const { MongoClient } = require('mongodb');

async function main() {
    const uri = 'mongodb://localhost:27017';
    const client = new MongoClient(uri, { useNewUrlParser: true, useUnifiedTopology: true });

    try {
        await client.connect();
        console.log('Connected to MongoDB');

        const database = client.db('my_database');
        const collection = database.collection('my_collection');

        // Perform operations on the collection
        // For example, insert documents, update documents, delete documents, etc.

    } catch (err) {
        console.error('Error:', err);
    } finally {
        await client.close();
        console.log('Disconnected from MongoDB');
    }
}

main();

/*activity
expand the previous script to work with collection.
implement user authentication in a nodejs script
optimize a collection in a sample nodejs application
*/

const jwt = require('jsonwebtoken');

// Example user authentication function
function authenticateUser(username, password) {
    // Check username and password against your database or any other authentication method
    // If authentication is successful, generate and return a JWT token
    const token = jwt.sign({ username }, 'secret_key', { expiresIn: '1h' });
    return token;
}

// Example usage
const token = authenticateUser('username', 'password');
console.log('JWT Token:', token);


// Inside the main function of your script
await collection.createIndex({ fieldName: 1 }); // 1 for ascending index, -1 for descending
