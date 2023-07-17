class ChainsawmanGirls {
  constructor() {
    this.name = [
      ["makima", "Rize", "Yoru"],
      ["power", "Angel", "Naouya"],
    ];
    this.age = [
      [25, 22, 18],
      [18, 17, 12],
    ];
  }

  printChars() {
    for (let i = 0; i < 2; i++) {
      for (let j = 0; j < 3; j++) {
        console.log(`${this.name[i][j]} (Age: ${this.age[i][j]})`);
      }
    }
  }
}

const girls = new ChainsawmanGirls();
girls.printChars();
