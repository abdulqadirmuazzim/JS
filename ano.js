let express = require('express')
let app = express()
app.use(express.urlencoded({ extended: false }))

app.get("/", function (req, res) {
    res.send(`
    <form action="/answer" method="POST">
    <p>Whar color is the sky on a clear day?</p>
    <input name = "skycolor" autocomplete = "off">
    <button>Submit</button>
    <style>
    background{
        color: lavender;
    }
    button{
        width: 100px;
        border-radius: 20px;
        background: lightgreen;
        border:none;
    }
    </style>
    </form>
    `)
    app.post('/answer', function (req, res) {
        if (req.body.skycolor.toUpperCase() == "BLUE") {
            res.send(`
            <h3><p>Correct, looks like you have eyes!</p></h3>
            <a href="/">Back to home page</a>`)
        } else {
            res.send(`
            <h3><p>You really need an eye checkup, wrong answer!!</p></h3>
            <a href="/">Back to home page</a>`)

        }
    })

    app.get('/answer', function (req, res) {
        res.send("<h1>404 error page is not available.</h1>")
    })
})
app.listen(900)