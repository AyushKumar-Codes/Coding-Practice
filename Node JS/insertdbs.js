const {MongoClient} = require('mongodb');
const uri = 'mongodb://localhost:27017';
const client = new MongoClient(uri);

async function connectionToMongoDB(){
    try{
        await client.connect();
        console.log('connected to MongoDB');
        const db = client.db('liststudent');
        const collection = db.collection('LL');
        await collection.insertOne({name:"Sakshi",age:19});
        console.log("Document inserted Successfully.");
    }
    catch (error){
        console.error("Error connecting to MongoDB:",error);
    }
    finally {
        await client.close();
    }
}

connectionToMongoDB();
