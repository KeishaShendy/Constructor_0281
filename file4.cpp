#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa(){
}
mahasiswa::mahasiswa(int iNim){
    nim = iNim;
}
int bangunDatar::hitungLuas(int l, int p){
    return l * p;

}

int bangunDatar::hitungKeliling(int l, int p){
    return (2 * p) + (2 * l);

}

mahasiswa::mahasiswa(string iNama){
    nama = iNama;
}

