#include <iostream>
using namespace std;

class Judul{
private:
    string nama;

public:
    Judul(string n){
    nama = n;
    }


    friend class Petugas; 
};

class Penulis{
private:
    string namaPenulis;

public:
    Penulis(string n){
    namaPenulis = n;
    }
  

    friend class Petugas; 
};

class StatusPeminjaman{
private:
    bool dipinjam;

public:
    StatusPeminjaman(bool s){
        dipinjam = s;
    }
 

    friend class Petugas; 
};

