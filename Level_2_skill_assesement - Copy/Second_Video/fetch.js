fetch("url")
    .then(res => res.json())
    .then(data => console.log(data));

async function getUser() {
    const res = await fetch("");
    const data = await res.json();
    console.log(data);
}