/**********************************************

 <<<<<<<<<<<< Array 2 Dimensi >>>>>>>>>>>>>
            Ada 4 Soal ketika UAS :
            Pengurutan(sorting)
            Pecah string(get string)
            Pencarian string(search)
            Recursive (recursive)

**********************************************/

function bubbleSort2D(arr, col, row) {
  let temp;

  for (let k = 0; k < col; k++) {
    for (let i = 0; i < col; i++) {
      for (let j = 0; j < col - 1; j++) {
        if (arr[i][j] > arr[i][j + 1]) {
          temp = arr[i][j];
          arr[i][j] = arr[i][j + 1];
          arr[i][j + 1] = temp;
        }
      }
    }
  }
}

function printArr(arr, col, row) {
  bubbleSort2D(arr, col, row);

  for (let i = 0; i < col; i++) {
    for (let j = 0; j < row; j++) {
      console.log(arr[i][j]);
    }
  }
}
let arr = [
  [10, 20, 30],
  [32, 11, 20],
  [40, 25, 82],
];
let col = 3,
  row = 3;

const printBubbleSort2D = printArr(arr, col, row);

console.log("After: ", printBubbleSort2D);
