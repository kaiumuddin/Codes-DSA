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
myPromise
    .then(res => console.log(res))
    .catch(err => console.log(err)
    );

console.log("End");

