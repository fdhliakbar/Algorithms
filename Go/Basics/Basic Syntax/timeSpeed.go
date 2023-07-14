package main

import (
	"log"
	"time"
)

func main() {
	start := time.Now()
	for i := 0; i < 100000; i++ {
		// Pass
	}
	end := time.Since(start)
	log.Printf("Golang: %s", end)
}
