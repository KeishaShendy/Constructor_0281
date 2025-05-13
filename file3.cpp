#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
        // Konstruktor dengan parameter nim dan nama
        mahasiswa(int nim, string nama);
};

// Implementasi konstruktor
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor dengan parameter terpanggil" << endl;
    cout << "NIM    : " << nim << endl;
    cout << "NAMA   : " << nama << endl;
}

int main(){
    // Membuat objek mahasiswa dan memanggil konstruktor dengan parameter
    mahasiswa mhs(12345, "Abra");
    return 0;
}