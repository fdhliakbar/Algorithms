package main

import "fmt"

func encrypt(text string, distance int) string {
	result := ""

	for _, char := range text {
		if char >= 'A' && char <= 'Z' {
			encrypted := ((int(char) - int('A') + distance) % 26) + int('A')
			result += string(rune(encrypted))
		} else if char >= 'a' && char <= 'z' {
			encrypted := ((int(char) - int('a') + distance) % 26) + int('a')
			result += string(rune(encrypted))
		} else {
			result += string(char)
		}
	}

	return result
}

func main() {
	text := "You Look Lonely"
	distance := 3
	fmt.Println("Text:", text)
	fmt.Println("Shift:", distance)
	fmt.Println("Cipher:", encrypt(text, distance))
}
