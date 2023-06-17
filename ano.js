let express = require('express')
let app = express()

app.get("/", function (req, res) {
    res.send(`
    <form action="/answer" method="POST">
    <p>Whar color is the sky on a clear day?</p>
    <input name = "lilac" autocomplete = "off">
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
})
app.listen(900)