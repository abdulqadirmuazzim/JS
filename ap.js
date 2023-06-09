

function prime(n) {
    for (let an = 2; an <= Math.sqrt(n); an++) {
        if (n % an == 0) return false;
    }
    return true;
}

let li = []
for (let num = 2; num <= 1000; num++) {
    if (prime(num)) {
        li.push(num);
    }
}

for (let g = 0; g <= li.length; g++) {
    console.log(li[g])
}
