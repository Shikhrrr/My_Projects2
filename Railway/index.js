document.addEventListener("DOMContentLoaded", function(){

    let destination = document.querySelector("#destination").value.toLowerCase();
    let trains_available = document.querySelector("#trains-available");

    let form1 = document.querySelector("#train-status");
    form1.onsubmit = function(){
        let trainNo = parseInt(document.querySelector("#source").value);
        const url = `https://indian-railway-irctc.p.rapidapi.com/getTrainId?trainno=${trainNo}`;

        const headers = {
        'x-rapid-api': 'rapid-api-database',
        'X-RapidAPI-Key': '8c2006cbc9msh95adb3542db6d7dp14cb6fjsn6e98e04cf6ea',
        'X-RapidAPI-Host': 'indian-railway-irctc.p.rapidapi.com'
        };

        fetch(url, {
        method: 'GET',
        headers: headers
        })

        .then(response => {
            if (!response.ok) {
            throw new Error(`HTTP error! Status: ${response.status}`);
            }
            return response.json();
        })

        .then(data => {
            console.log(data);
        })

        .catch(error => {
            console.error(error);
        });

        return false;
    }
});