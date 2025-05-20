//buatlah program c++ dengan class barang yang memiliki atribut : namaBarang,
//KodeBarang
//program memiliki constructor berparameter untuk mengisi
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Constructor berparameter
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    // Fungsi untuk menampilkan informasi barang
    void tampilkanInformasi() {
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};

int main() {
    // Membuat objek barang dengan constructor berparameter
    Barang barang1("Laptop", "B001");
    
    // Menampilkan informasi barang
    barang1.tampilkanInformasi();

    return 0;
}