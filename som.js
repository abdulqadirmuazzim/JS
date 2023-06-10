let sd = document.querySelector('#forms')
let fie = document.querySelector("#wen")
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