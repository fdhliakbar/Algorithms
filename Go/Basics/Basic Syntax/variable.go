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
	hasil := tambah(3, 5)
	fmt.Println("Hasil penjumlahan:", hasil)
}