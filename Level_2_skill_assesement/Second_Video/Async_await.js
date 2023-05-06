const myPromise = new Promise((resolve, reject) => {
    const user = "Kaium";

    if (!user) {
        reject("Data not found");
    }
    else {
        resolve("Data found");
    }
});

// Consume

async function getData() {
    const data = await myPromise;
    console.log(data);
}

getData();