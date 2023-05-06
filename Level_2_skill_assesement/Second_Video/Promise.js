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
myPromise
    .then(res => console.log("Then", res))
    .catch(err => console.log("Catch", err));