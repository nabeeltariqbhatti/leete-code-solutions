
async function f() {

  let promise = await fetch('https://jsonplaceholder.typicode.com/todos')
  .then(response => response.json())
  .then(json => {return json})

  let result =  promise; // wait until the promise resolves (*)

  for(let item of result){
  console.log(item)
  } // "done!"
}

f();
