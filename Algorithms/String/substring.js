function delString(startIndex, lastIndex, strings) {
  let deletedString = "";

  for (let i = startIndex; i <= lastIndex; i++) {
    deletedString = deletedString + strings[i];
  }
  return deletedString;
}

let string = "BG 70 VA";
let startIndex = 3;
let lastIndex = 4;

let result = delString(startIndex, lastIndex, string);

console.log("Output:", result);
