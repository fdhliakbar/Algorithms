package main

import "fmt"

func factorialSum(N int) int {
	if N == 1 {
		return 1
	} else {
		return N * factorialSum(N-1)
	}
}


func main() {
	result := factorialSum(5)
	fmt.Println(result)
	// 5 * 4 * 3 * 2 * 1 = 120
}
