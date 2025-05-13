#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(); //constructor
};

mahasiswa::mahasiswa(){
    cout<<"constructor terpanggil"<<endl; //Definisi constructor
}

int main(){
    mahasiswa mhs; //pembuatan object

    return 0;
}