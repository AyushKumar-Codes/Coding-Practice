const os = require('os');

// Get the total memory in bytes
const totalMemoryBytes = os.totalmem();

// Convert to KB, MB, and GB
const memoryInKB = totalMemoryBytes / 1024;
const memoryInMB = memoryInKB / 1024;
const memoryInGB = memoryInMB / 1024;

// Log the results
console.log(`Total Memory: ${totalMemoryBytes} bytes`);
console.log(`Memory in Kilobytes: ${memoryInKB.toFixed(2)} KB`);
console.log(`Memory in Megabytes: ${memoryInMB.toFixed(2)} MB`);
console.log(`Memory in Gigabytes: ${memoryInGB.toFixed(2)} GB`);
console.log("Architecture : " + os.arch());
console.log("Free Memory : "+ os.freemem()/(1024*1024*1024));
console.log("Host Name : " +os.hostname());
console.log("Platform : " + os.platform());
console.log("User Info : " + os.userInfo())