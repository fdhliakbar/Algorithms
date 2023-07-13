function bubbleSort(arr, rows) {
  for (var k = 0; k < rows; k++) {
    for (var i = 0; i < rows; i++) {
      for (var j = 0; j < rows - 1; j++) {
        if (arr[i][j] > arr[i][j + 1]) {
          var temp = arr[i][j];
          arr[i][j] = arr[i][j + 1];
          arr[i][j + 1] = temp;
        }
      }
    }
  }
}

function printArrays(arr, rows) {
  for (let i = 0; i < rows; i++) {
    for (let j = 0; j < rows; j++) {
      console.log(arr[i][j]) << " ";
    }
  }
  console.log("\n");
}

var arr = [
  [2, 5, 1],
  [4, 3, 6],
  [9, 8, 7],
];

bubbleSort(arr, 3);

console.log(printArrays(arr, 3));
