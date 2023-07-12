function penambahan(numbers, index = 0) {
  if (index >= numbers.length) return 0;

  return numbers[index] + penambahan(numbers, index + 1);
}

function pengurangan(numbers, index = 0) {
  if (index >= numbers.length) return 0;

  return numbers[index] - pengurangan(numbers, index + 1);
}

function pembagian(numbers, index = 0) {
  if (index >= numbers.length) return 1;

  if (numbers[index] === 0) return 0;

  return numbers[index] / pembagian(numbers, index + 1);
}

function sisaBagi(numbers, index = 0) {
  if (index >= numbers.length) return 1;

  if (numbers[index] === 0) return 0;

  return numbers[index] % sisaBagi(numbers, index + 1);
}

const numbers = [10, 2, 3, 4, 5];

const hasilPenambahan = penambahan(numbers);
console.log("Hasil penambahan:", hasilPenambahan);

// const hasilPengurangan = pengurangan(numbers);
// console.log("Hasil pengurangan:", hasilPengurangan);

// const hasilPembagian = pembagian(numbers);
// console.log("Hasil pembagian:", hasilPembagian);

// const hasilSisaBagi = sisaBagi(numbers);
// console.log("Hasil sisa bagi:", hasilSisaBagi);
