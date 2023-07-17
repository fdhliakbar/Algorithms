package main

import "fmt"

type ChainsawmanGirls struct {
  name [2][3]string
  age  [2][3]int
}

func NewChainsawmanGirls() *ChainsawmanGirls {
  return &ChainsawmanGirls{
    name: [2][3]string{
      {"makima", "Rize", "Yoru"},
      {"power", "Angel", "Naouya"},
    },
    age: [2][3]int{
      {25, 22, 18},
      {18, 17, 12},
    },
  }
}

func (c *ChainsawmanGirls) printChars() {
  for i := 0; i < 2; i++ {
    for j := 0; j < 3; j++ {
      fmt.Printf("%s (Age: %d)\n", c.name[i][j], c.age[i][j])
    }
  }
}

func main() {
  girls := NewChainsawmanGirls()
  girls.printChars()
}
