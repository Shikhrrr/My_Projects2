    let displayValue = "";
    let buttons = document.querySelectorAll('.button');

    Array.from(buttons).forEach (function (button) {
        button.addEventListener('click', function (elem) {

            if (elem.target.innerHTML == '=') {
                displayValue = eval(displayValue);
                document.querySelector('input').value = displayValue;
            }
            
            else if(elem.target.innerHTML == 'C') {
                displayValue = "";
                document.querySelector('input').value = displayValue;
            }
            
            else {
                displayValue = displayValue + elem.target.innerHTML;
                document.querySelector('input').value = displayValue;
            }
        });
});
