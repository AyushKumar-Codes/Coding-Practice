//gzip
// var zlib = require('zlib');
// var fs = require('fs');
// var gzip = zlib.createGzip();
// var r= fs.createReadStream('input.txt');
// var w= fs.createWriteStream('test.txt.gz');
// r.pipe(gzip).pipe(w);


//Unzip
// const zlib = require('zlib');
// const fs = require('fs');
// const unzip = zlib.createUnzip();
// const r= fs.createReadStream('test.txt.gz');
// const w= fs.createWriteStream('input.txt');
// r.pipe(unzip).pipe(w);


//Brotli
var zlib = require('zlib');
var fs = require('fs');
var brot =zlib.BrotliCompress();
var r = fs.createReadStream('test.txt');
var w = fs.createWriteStream('test.txt.gz');
r.pipe(brot).pipe(w);