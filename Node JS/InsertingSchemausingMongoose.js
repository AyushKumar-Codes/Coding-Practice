const mongoose =require("mongoose");
mongoose.connect("mongodb://localhost:27017/liststudent");
const productSchema = new mongoose.Schema({
    name:String,
    price:Number
});
const saveInDB = async ()=> {
    const Product = mongoose.model('products', productSchema)
    let data= new Product({name: "smartphone", price: 20000})
    const result = await data.save();
    console.log(result);
}

const updateInDB = async()=>{
    const Product = mongoose.model("products",productSchema)
    let data = await Product.updateOne(
        {name:"smartphone"},{$set : {price:700}})
    console.log(data);
}
const deleteInDB = async()=>{
    const Product = mongoose.model("products",productSchema)
    let data = await Product.deleteOne({name:"smartphone"});
    console.log(data);
}
const findInDB = async()=>{
    const Product = mongoose.model("products",productSchema)
    let data = await Product.find();
    console.log(data);
}
// saveInDB();
// updateInDB();
// deleteInDB();
// findInDB();