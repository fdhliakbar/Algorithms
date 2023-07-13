package main

import "fmt"

/***********************************

Tipe Data  Min Value  Max Value
int8		-128		127
int16		-32768		32767
int32		-2147483648
int64		-9223372036

***********************************/


func tambah(a, b int) int {
	return a + b
}


func main() {
	var lastName string
	lastName = "Akbar"


	var myName string = "fadhli Akbar"
	myAge := 18

	fmt.Println(myName)
	fmt.Println(myAge)
	fmt.Println(lastName)
}