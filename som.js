let sd = document.getElementById('forms')
let fie = document.getElementById("wen")
let list = document.querySelector("#lis")

sd.addEventListener("submit", (e) => {
    e.preventDefault()
    item(fie.value)
})

function item(x) {
    let o = `<li>${x} <button onclick ='del(this)'>Delete</button></li>`
    list.insertAdjacentHTML("beforeend", o)
    fie.value = ""
    fie.focus()
}
function del(e) {
    alert("message deleted.")
    e.parentElement.remove()
}
