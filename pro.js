let http = require('http')

let our = http.createServer(function (rq, rs) {
    console.log(rq.url)
    if (rq.url == "/") {
        rs.end("So its been a success, alhamdulillah")
    }
    else if (rq.url == "/about") {
        rs.end("There is no about page yet. Website in the making!")
    }
    else {
        rs.end("404 error")
    }
})

our.listen(2500)