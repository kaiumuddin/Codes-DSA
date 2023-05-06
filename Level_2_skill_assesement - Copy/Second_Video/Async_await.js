const myPromise = new Promise((resolve, reject) => {
    const user = "Me";
    if (!user) {
        reject("Data not found");
    } else {
        setTimeout(() => {
            resolve("Data found");
        }, 1000);
    }
});

// Consume
async function getData() {
    const res = await myPromise;
    console.log(res);
}

getData();