// buf =new Buffer.alloc(26);
// for(var i =0;i<26;i++){
//     buf[i]=i+97;
// }
// console.log(buf.toString('ascii'));
// console.log(buf.toString('ascii',0,5));
// console.log(buf.toString('utf-8',0,5));
// console.log(buf.toString(undefined,0,5));

// var buf = new Buffer('Simply Easy Learning');
// var json = buf.toJSON(buf);
// console.log(json);

//Buffer Concatenation
//
// var buffer1= new Buffer.from('TutorialsPoint');
// var buffer2 = new Buffer.from('Simply Easy Learning');
// var buffer3 = Buffer.concat([buffer1,buffer2]);
// console.log("buffer3 content: "+buffer3.toString());

// var buffer1 = new Buffer.from('ABC');
// var buffer2 = new Buffer.from('ABCD');
// var result = buffer1.compare(buffer2);
// if(result < 0){
//     console.log(buffer1 + " comes before "+ buffer2);
// }
// else if (result === 0){
//     console.log(buffer1 + " is same as "+buffer2);
// }
// else {
//     console.log(buffer1 + " comes after "+ buffer2);
// }

//Buffer Copy
// var buffer1= new Buffer.from('ABC');
// var buffer2 = new Buffer.alloc(3);
// buffer1.copy(buffer2);
// console.log("buffer2 content: "+buffer2.toString());

//Parameterized Copy String Slicing
// var buffer1= new Buffer.from('ABC');
// var buffer2 = new Buffer.alloc(3);
// buffer1.copy(buffer2,0,1,2);
// console.log("buffer2 content: "+buffer2.toString());

//String Slicing
// var buffer1 =new Buffer('TutorialsPoint');
// var buffer2 = buffer1.slice(0,9);
// console.log("buffer2 content: "+ buffer2.toString());

//String Equality Check

// const buf1 = Buffer.from('ABC');
// const buf2 = Buffer.from('414243','hex');
// const buf3 = Buffer.from('ABCD');
// console.log(buf1.equals(buf2));
// console.log(buf1.equals(buf3));

//Buffer Include

const buffer = new Buffer.from('Geek One');
console.log(buffer.includes('One'));
