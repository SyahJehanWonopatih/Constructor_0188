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

