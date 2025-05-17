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

class Petugas{
public:
    void tampilData(Judul j, Penulis p, StatusPeminjaman s){
        cout << "Judul Buku: " << j.nama << endl;
        cout << "Nama Penulis: " << p.namaPenulis << endl;
        cout << "Status: " << "Dipinjam" << endl;
        cin >> s.dipinjam;
    }

    friend class Admin;
};

int main(){
    Judul j("Syah Jehan");
    Penulis p("TeraByte");
    StatusPeminjaman s("dipinjam");

    Petugas petugas;
    petugas.tampilData(j, p, s);

    return 0;
}