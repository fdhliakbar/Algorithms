function selectionSort(arr) {
  let temp;
  let sizeArr = arr.length;

  for (let i = 0; i < sizeArr - 1; i++) {
    for (let j = i; j < sizeArr - 1; j++) {
      // Fixed the typo here
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

let arr = [5, 3, 1, 2, 4];
let sizeArr = arr.length;

console.log("Before: " + arr.join(", "));
selectionSort(arr);
console.log("After: " + arr.join(", "));
