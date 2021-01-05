console.log('Hello WOrld');

var c = 7;
let v = 14;
const t = 21;

var msg = "AA";
console.log(typeof msg);

var names= ["AA", "BB"];



for (const i in names) {
    const element = names[i];
    console.log(i, element);
}

var m = new Map();
m.set("aa", 1);
m.set("bb", 2);

for(let [key, value] of m) {
    console.log(key, value);
}

function soma(x, y) 
{
    return x + y;
}

var m = function (x, y) 
{
    return x * y;
}
console.log(m(10,10));

console.log(soma(10,10));



