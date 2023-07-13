package main

import "fmt"

func selectionSort(numbers []int) []int {
	len := len(numbers)
	for i := 0; i < len; i++ {
		minIndex := i
		for j := i + 1; j < len; j++ {
			if numbers[j] < numbers[minIndex] {
				minIndex = j
			}
		}
		numbers[i], numbers[minIndex] = numbers[minIndex], numbers[i]
	}
	return numbers
}

func main() {
	elements := []int{8, 2, 1, 4, 5}
	sortedElements := selectionSort(elements)
	fmt.Println("Setelah", sortedElements)
	// Hasil = [1, 2, 4, 5, 8]
}