#include "Kotak-v3.h"
#include<iostream>

using namespace std;


Kotak::Kotak(float np, float nl, float nt) : panjang{np}, lebar{nl}, tinggi{nt} {
	cout << "Constructor 1 dipanggil" << endl;
}

Kotak::Kotak(float sisi_sama) : Kotak{sisi_sama, sisi_sama, sisi_sama}{
	cout << "Constructor 2 dipanggil" << endl;
}

float Kotak::getPanjang() {return panjang;}
float Kotak::getLebar() {return lebar;}
float Kotak::getTinggi() {return tinggi;}

Kotak& Kotak::setPanjang(float value) {
	if(value > 0) panjang = value;
	// Mengembalikan referensi ke objek pemanggil
	return *this;
}

Kotak& Kotak::setLebar(float value) {
	if(value > 0) lebar = value;
	// Mengembalikan referensi ke objek pemanggil
	return *this;
}

Kotak& Kotak::setTinggi(float value) {
	if(value > 0) tinggi = value;
	// Mengembalikan referensi ke objek pemanggil
	return *this;
}

float Kotak::hitungArea(){
	return panjang * lebar * tinggi;
}
