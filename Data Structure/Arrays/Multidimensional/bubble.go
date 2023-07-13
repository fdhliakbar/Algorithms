package main

import "fmt"

func bubbleSort2DArray(arr [][]int) {
	rows := len(arr)
	for k := 0; k < rows; k++ {
		for i := 0; i < rows; i++ {
			for j := 0; j < 3-1; j++ {
				if arr[i][j] > arr[i][j+1] {
					// Tukar posisi elemen jika elemen saat ini lebih besar dari elemen berikutnya
					temp := arr[i][j]
					arr[i][j] = arr[i][j+1]
					arr[i][j+1] = temp
				}
			}
		}
	}
}

func main() {
	arr := [][]int{{9, 5, 7}, {3, 2, 1}, {6, 8, 4}}
	rows := len(arr)

	fmt.Println("Sebelum diurutkan:")
	for i := 0; i < rows; i++ {
		for j := 0; j < len(arr[i]); j++ {
			fmt.Print(arr[i][j], " ")
		}
		fmt.Println()
	}

	bubbleSort2DArray(arr)

	fmt.Println("Setelah diurutkan:")
	for i := 0; i < rows; i++ {
		for j := 0; j < len(arr[i]); j++ {
			fmt.Print(arr[i][j], " ")
		}
		fmt.Println()
	}
}
