package main

import "fmt"

func main() {
	var numberOne int = 50
	fmt.Println(numberOne)

	var middleName string = "fadhli"
	fmt.Println(middleName)

	var isTrue bool = true
	fmt.Println(isTrue)

	var sliceAngka []int = []int {1, 2, 3, 4, 5}
	fmt.Println(sliceAngka)

	type Books struct {
		Name string
		Author string
	}

	var m Books = Books {
		Name: "The Black Swan",
		Author: "Nassim Nicholas Taleb",
	}
	fmt.Println(m)
}