// const express = require('express')
// const app = express()
//
// const myLoggerMiddleware = function (req, res, next) {
//     console.log('LOGGED')
//     next()
// }
//
// app.use(myLoggerMiddleware)
//
// app.get('/', (req, res) => {
//     res.send('Hello World!')
// })
//
// app.listen(3000)

// const express = require('express')
// const app = express()
//
// const requestTime = function (req, res, next) {
//     req.requestTime = Date.now()
//     next()
// }
//
// app.use(requestTime)
//
// app.get('/', (req, res) => {
//     let responseText = 'Hello World!<br>'
//     responseText += `<small>Requested at: ${req.requestTime}</small>`
//     res.send(responseText)
// })
//
// app.listen(3000)
