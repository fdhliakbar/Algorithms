function bubbleSort(arr, n) {
  for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

function printArray(arr, n) {
  for (let i = 0; i < n; i++) {
    console.log(arr[i], " ");
  }
}

let arr = [3, 2, 4, 5, 1];
let n = arr.length;

bubbleSort(arr, n);
console.log(printArray(arr, n));
