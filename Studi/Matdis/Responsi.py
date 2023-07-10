# Author : Muhamad Fadhli Akbar - 2200018197
# Judul  : Pengelolaan Data Mahasiswa menggunakan Relasi
# Slot   : Sabtu 07.30


import os


class Mahasiswa:
    def __init__(self, nim, nama, jurusan):
        self.nim = nim
        self.nama = nama
        self.jurusan = jurusan


class DatabaseMahasiswa:
    def __init__(self):
        self.mahasiswa = []

    def tambah_mahasiswa(self, nim, nama, jurusan):
        mhs = Mahasiswa(nim, nama, jurusan)
        self.mahasiswa.append(mhs)
        print("Data mahasiswa berhasil ditambahkan.")

    def cari_mahasiswa(self, nim):
        for mhs in self.mahasiswa:
            if mhs.nim == nim:
                return mhs
        return None

    def hapus_mahasiswa(self, nim):
        mhs = self.cari_mahasiswa(nim)
        if mhs:
            self.mahasiswa.remove(mhs)
            print("Data mahasiswa berhasil dihapus.")
        else:
            print("Data mahasiswa tidak ditemukan.")

    def tampilkan_semua(self):
        if len(self.mahasiswa) > 0:
            print("Daftar Mahasiswa:")
            for mhs in self.mahasiswa:
                print(
                    f"NIM: {mhs.nim}, Nama: {mhs.nama}, Jurusan: {mhs.jurusan}")
        else:
            print("Belum ada data mahasiswa.")


def clear_screen():
    # Sesuaikan sesuai dengan sistem operasi yang Anda gunakan
    if os.name == 'posix':  # Untuk sistem operasi berbasis Unix (Linux, macOS)
        _ = os.system('clear')
    else:  # Untuk sistem operasi Windows
        _ = os.system('cls')


db = DatabaseMahasiswa()

while True:
    print("----------------------------------")
    print("Program Pengelolaan Data Mahasiswa")
    print("----------------------------------")
    print("1. Tambah Mahasiswa")
    print("2. Cari Mahasiswa")
    print("3. Hapus Mahasiswa")
    print("4. Tampilkan Semua Mahasiswa")
    print("5. Keluar")

    pilihan = input("Masukkan Pilihan anda : ")
    clear_screen()  # Clear screen setelah pengguna memilih opsi

    if pilihan == "1":
        nim = input("Masukkan NIM: ")
        nama = input("Masukkan Nama: ")
        jurusan = input("Masukkan Jurusan: ")
        db.tambah_mahasiswa(nim, nama, jurusan)
    elif pilihan == "2":
        nim = input("Masukkan NIM: ")
        mhs = db.cari_mahasiswa(nim)
        if mhs:
            print(
                f"Mahasiswa ditemukan.\nNIM: {mhs.nim}, Nama: {mhs.nama}, Jurusan: {mhs.jurusan}")
        else:
            print("Mahasiswa tidak ditemukan.")
    elif pilihan == "3":
        nim = input("Masukkan NIM: ")
        db.hapus_mahasiswa(nim)
    elif pilihan == "4":
        db.tampilkan_semua()
    elif pilihan == "5":
        print("Program selesai.")
        break
    else:
        print("Pilihan tidak valid. Silakan masukkan angka 1-5.")

    input("Tekan Enter untuk melanjutkan...")
    clear_screen()  # Clear screen sebelum menampilkan menu berikutnya
