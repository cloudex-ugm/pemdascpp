#include<iostream>
// Header file untuk definisi class Kotak harus disertakan
#include "Kotak-v3.h"
using namespace std;

int main()
{
	Kotak kotak1(12, 10, 5);
	
	cout << kotak1.getPanjang() << endl;
	cout << kotak1.getLebar() << endl;
	cout << kotak1.getTinggi() << endl;
	
	// Chaining fungsi setter yang
	// mengembalikan referensi ke objek kotak1
	kotak1.setPanjang(10).setLebar(10).setTinggi(10);
	cout << "Setelah melakukan modifikasi" << endl;
	cout << kotak1.getPanjang() << endl;
	cout << kotak1.getLebar() << endl;
	cout << kotak1.getTinggi() << endl;
}