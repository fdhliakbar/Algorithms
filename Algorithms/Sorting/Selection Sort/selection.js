function selectionSort(numbers) {
  let minIndex,
    temp,
    len = numbers.length;

  for (let i = 0; i < len; i++) {
    minIndex = i;
    for (let j = i + 1; j < len; j++) {
      if (numbers[j] < numbers[minIndex]) {
        minIndex = j;
      }
    }
    temp = numbers[i];
    numbers[i] = numbers[minIndex];
    numbers[minIndex] = temp;
  }
  return numbers;
}

let elements = [8, 2, 1, 4, 5];

console.log("Setelah", selectionSort(elements));
// Result = [1, 2, 4, 5, 8]
