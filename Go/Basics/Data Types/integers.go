package main

import (
	"fmt"
	"reflect"
	"unsafe"
)

// Integers (Signed and Unsigned)

/*
	int = Platfrom dependent
	int8 8bits/1byte
	int16 16bits/2byte
	int32 32bits/4byte
	int64 64bits/8byte
*/

func main() {
	var firstNumber int8 = 10

	fmt.Println("%d bytes\n", unsafe.Sizeof(firstNumber))
	fmt.Println("firstNumber's type is %s\n", reflect.TypeOf(firstNumber))
}