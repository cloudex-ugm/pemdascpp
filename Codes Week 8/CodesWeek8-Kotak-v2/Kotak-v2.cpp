#include "Kotak-v2.h"
#include<iostream>

using namespace std;


Kotak::Kotak(float np, float nl, float nt) : panjang{np}, lebar{nl}, tinggi{nt} {
	cout << "Constructor 1 dipanggil" << endl;
}

// Perhatikan setelah titik dua
// bahwa constructor kedua memanggil constructor pertama
Kotak::Kotak(float sisi_sama) : Kotak{sisi_sama, sisi_sama, sisi_sama}{
	cout << "Constructor 2 dipanggil" << endl;
}

float Kotak::hitungArea(){
	return panjang * lebar * tinggi;
}
