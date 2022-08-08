#include "Kotak-v5.h"
#include<iostream>

using namespace std;

// Constructor
Kotak::Kotak() {
	cout << "Default Constructor dipanggil" << endl;
	++object_count;
}

Kotak::Kotak(float np, float nl, float nt) : panjang{np}, lebar{nl}, tinggi{nt} {
	cout << "Constructor 1 dipanggil" << endl;
	++object_count;
}

Kotak::Kotak(float sisi_sama) : Kotak{sisi_sama, sisi_sama, sisi_sama}{
	cout << "Constructor 2 dipanggil" << endl;
}

// Inisialisasi static member variable
unsigned int Kotak::object_count = 0;

// Getters
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

void Kotak::decreaseObjectCount(){
	--object_count;
}

float Kotak::hitungArea(){
	return panjang * lebar * tinggi;
}
