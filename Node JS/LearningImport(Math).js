function add(a,b){
    return (a+b);
}
function sub(a,b){
    return (a-b);
}

function mul(a,b){
    return a*b;
}
function div(a,b){
    return a/b;
}

// module.exports = add;
// module.exports = sub; //this will be executed instead of add

//We can create object to export multiple functions at once
module.exports = {
   add,
    sub,
    multi: mul,
    divi: div
}