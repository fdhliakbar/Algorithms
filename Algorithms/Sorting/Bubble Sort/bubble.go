package main

import "fmt"

func swap(x *int, y *int) {
	temp := *x
	*x = *y
	*y = temp
}

func bubbleSort(numbers []int) {
	size := len(numbers)
	for i := 0; i < size-1; i++ {
		for j := 0; j < size-i-1; j++ {
			if numbers[j] > numbers[j+1] {
				swap(&numbers[j], &numbers[j+1])
			}
		}
	}
}

func printNumbers(numbers []int) {
	for _, num := range numbers {
		fmt.Printf("%d ", num)
	}
	fmt.Println()
}

func main() {
	elements := []int{8, 2, 1, 4, 5}
	bubbleSort(elements)
	printNumbers(elements)
}
