package main

import "fmt"

func addition(numbers []int, length int, index int) int {
	if index >= length {
		return 0
	}

	return numbers[index] + addition(numbers, length, index+1)
}

func subtraction(numbers []int, length int, index int) int {
	if index >= length {
		return 0
	}

	return numbers[index] - subtraction(numbers, length, index+1)
}

func division(numbers []int, length int, index int) int {
	if index >= length {
		return 1
	}

	if numbers[index] == 0 {
		return 0
	}

	return numbers[index] / division(numbers, length, index+1)
}

func modulus(numbers []int, length int, index int) int {
	if index >= length {
		return 1
	}

	if numbers[index] == 0 {
		return 0
	}

	return numbers[index] % modulus(numbers, length, index+1)
}

func main() {
	numbers := []int{10, 2, 3, 4, 5}
	size := len(numbers)

	result := addition(numbers, size, 0)
	fmt.Println("Addition result:", result)
}
