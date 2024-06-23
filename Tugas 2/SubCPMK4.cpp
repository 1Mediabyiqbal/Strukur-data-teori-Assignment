#include <iostream>
#include <string>

// Mendeklarasikan struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    std::string nama;
    int umur;
    std::string jurusan;
    double ipk;
};

int main() {
    // Membuat objek dari struct Mahasiswa
    Mahasiswa mhs1, mhs2;

    // Mengisi data untuk mhs1
    mhs1.nama = "Andi";
    mhs1.umur = 20;
    mhs1.jurusan = "Teknik Informatika";
    mhs1.ipk = 3.75;

    // Mengisi data untuk mhs2
    mhs2.nama = "Budi";
    mhs2.umur = 21;
    mhs2.jurusan = "Sistem Informasi";
    mhs2.ipk = 3.85;

    // Menampilkan data mahasiswa 1
    std::cout << "Data Mahasiswa 1:" << std::endl;
    std::cout << "Nama: " << mhs1.nama << std::endl;
    std::cout << "Umur: " << mhs1.umur << std::endl;
    std::cout << "Jurusan: " << mhs1.jurusan << std::endl;
    std::cout << "IPK: " << mhs1.ipk << std::endl;
    std::cout << std::endl;

    // Menampilkan data mahasiswa 2
    std::cout << "Data Mahasiswa 2:" << std::endl;
    std::cout << "Nama: " << mhs2.nama << std::endl;
    std::cout << "Umur: " << mhs2.umur << std::endl;
    std::cout << "Jurusan: " << mhs2.jurusan << std::endl;
    std::cout << "IPK: " << mhs2.ipk << std::endl;

    return 0;
}
