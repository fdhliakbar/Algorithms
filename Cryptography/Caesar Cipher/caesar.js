function caesarCipherEncrypt(plaintext, shift) {
  let ciphertext = "";

  for (let i = 0; i < plaintext.length; i++) {
    let char = plaintext[i];

    // Menggeser karakter huruf kapital
    if (char.match(/[A-Z]/)) {
      let code = ((char.charCodeAt() - 65 + shift) % 26) + 65;
      char = String.fromCharCode(code);
    }
    // Menggeser karakter huruf kecil
    else if (char.match(/[a-z]/)) {
      let code = ((char.charCodeAt() - 97 + shift) % 26) + 97;
      char = String.fromCharCode(code);
    }

    ciphertext += char;
  }

  return ciphertext;
}

let plaintext = prompt("Masukkan teks: ");
let shift = parseInt(prompt("Masukkan jumlah pergeseran: "));

let ciphertext = caesarCipherEncrypt(plaintext, shift);

console.log("Hasil Enkripsi: " + ciphertext);
