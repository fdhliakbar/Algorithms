function startPattern() {
  let N = 5;
  let string = " ";

  for (let i = 0; i < N; i++) {
    for (let j = 0; j < N; j++) {
      string += "*";
    }
    // newline after each now
    string += "\n";
  }
}

function rightTriangle() {
  let N = 5;
  let string = "";

  for (let i = 1; i <= N; i++) {
    for (let j = 0; j < N - i; j++) {
      string += " ";
    }
    for (let k = 0; k < i; k++) {
      string += "*";
    }
    string += "\n";
  }
}

console.log(rightTriangle());
