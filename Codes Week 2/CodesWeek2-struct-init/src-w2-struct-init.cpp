#include<iostream>
#include<string>
using namespace std;

int main()
{
	// Cara Pertama
	struct MyCar1 {
		string merk;
		int tahun_keluaran;
		string bahan_bakar;
	};
	
	MyCar1 mobil_1, mobil_2, mobil_3;
	
	// Cara Kedua
	struct MyCar2 {
		string merk;
		int tahun_keluaran;
		string bahan_bakar;
	} mobil_1, mobil_2, mobil_3;
}