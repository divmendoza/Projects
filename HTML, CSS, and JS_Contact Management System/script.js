const submit = document.getElementById("submit");
var people = [];
var editIndex = -1;
let count = 0;
function loadData() {
    if (localStorage.getItem('people') != null) {
        people = JSON.parse(localStorage.getItem('people'));
        let output = "";
        people.forEach((person, index) => {
            output += `<tr>
                <td style="width: 20%">${person.name}</td>
                <td style="width: 20%">${person.surname}</td>
                <td style="width: 20%">${person.age}</td>
                <td style="width: 20%">${person.num}</td>
                <td style="width: 20%">
                    <button class="customUpd" onclick="updatePerson(${index})">✏️</button>
                    <button class="customDelete" onclick="deletePerson(${index})">X</button>
                </td>
            </tr>`;
        });
        document.getElementById("contents").innerHTML = output;
    }
}

function deletePerson(index) {
    people.splice(index, 1);
    localStorage.setItem('people', JSON.stringify(people));
    loadData();
    if(count != 0){
        count--;
    }
}
function addData() {
    const name = document.getElementById("name").value.trim();
    const surname = document.getElementById("surname").value.trim();
    const age = document.getElementById("age").value.trim();
    const num = document.getElementById("number").value.trim();

    if (count != 7) {
        if (name && surname && age && num) {
            if (editIndex === -1) {
                const person = { name, surname, age, num };
                people.push(person);
            } else {
                people[editIndex] = { name, surname, age, num };
                editIndex = -1;
            }
            localStorage.setItem('people', JSON.stringify(people));
            loadData();
            clearForm();
            count++;
        } else {
            alert("All fields must be filled out."); 
        }
    } else if(count == 100){
        if (name && surname && age && num) {
            if (editIndex === -1) {
                const person = { name, surname, age, num };
                people.push(person);
            } else {
                people[editIndex] = { name, surname, age, num };
                editIndex = -1;
            }
            localStorage.setItem('people', JSON.stringify(people));
            loadData();
            clearForm();
            count++;
        } else {
            alert("All fields must be filled out."); 
        }
    }
}

function updatePerson(index) {
    count2 = 100;
    const person = people[index];
    document.getElementById("name").value = person.name;
    document.getElementById("surname").value = person.surname;
    document.getElementById("age").value = person.age;
    document.getElementById("number").value = person.num;

    editIndex = index;
}
function clearForm() {
    document.getElementById("name").value = "";
    document.getElementById("surname").value = "";
    document.getElementById("age").value = "";
    document.getElementById("number").value = "";
}
submit.addEventListener('click', function (event) {
    event.preventDefault();
    addData();
});
function exitFunc(){
    document.getElementById("exitBtn").addEventListener("click", function(event) {
        event.preventDefault();  
    
        const confirmExit = confirm("Are you sure you want to close the window?");
        if (confirmExit) {
            window.close();  
        }
    });
}

