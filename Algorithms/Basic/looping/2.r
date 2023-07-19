fn main() {
    let rows = 3;
    let cols = 3;
    let arr = [
        [10, 20, 30],
        [32, 11, 20],
        [40, 25, 82],
    ];

    for i in 0..rows {
        for j in 0..cols {
            println!("arr[{}][{}] = {}", i, j, arr[i][j]);
        }
    }
}
