#include "Kotak-v4.h"
#include<iostream>

using namespace std;

// Constructor
Kotak::Kotak() {
	cout << "Default Constructor dipanggil" << endl;
}

Kotak::Kotak(float np, float nl, float nt) : panjang{np}, lebar{nl}, tinggi{nt} {
	cout << "Constructor 1 dipanggil" << endl;
}

Kotak::Kotak(float sisi_sama) : Kotak{sisi_sama, sisi_sama, sisi_sama}{
	cout << "Constructor 2 dipanggil" << endl;
}

// Getters

// Menambahkan keyword const
// untuk memberitahu bahwa fungsi berikut tidak
// mengubah kondisi internal objek
float Kotak::getPanjang() const {return panjang;}
float Kotak::getLebar() const {return lebar;}
float Kotak::getTinggi() const {return tinggi;}


// Setters
Kotak& Kotak::setPanjang(float value) {
	if(value > 0) panjang = value;
	return *this;
}

Kotak& Kotak::setLebar(float value) {
	if(value > 0) lebar = value;
	return *this;
}

Kotak& Kotak::setTinggi(float value) {
	if(value > 0) tinggi = value;
	return *this;
}

// Member Function
float Kotak::hitungArea() const {
	return panjang * lebar * tinggi;
}
