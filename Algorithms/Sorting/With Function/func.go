package main

import (
	"fmt"
	"sort"
)

func main() {
	numbers := []int{4, 2, 7, 1, 5}
	fmt.Println("Sebelum sorting:", numbers)

	sort.Ints(numbers)

	fmt.Println("Setelah sorting:", numbers)
}
