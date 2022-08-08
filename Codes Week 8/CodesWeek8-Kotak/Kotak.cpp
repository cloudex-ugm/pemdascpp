#include "Kotak.h"
#include<iostream>

using namespace std;

// Perhatikan adanya tambahan "Kotak::" pada awal pendefinisian fungsi
Kotak::Kotak(float nilai_panjang, float nilai_lebar, float nilai_tinggi){
	cout << "Kotak baru dibentuk" << endl;
	panjang = nilai_panjang;
	lebar = nilai_lebar;
	tinggi = nilai_tinggi;
}

float Kotak::hitungArea(){
	return panjang * lebar * tinggi;
}
