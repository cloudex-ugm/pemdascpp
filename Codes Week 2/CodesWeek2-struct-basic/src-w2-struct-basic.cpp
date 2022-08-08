#include<iostream>
#include<string>
using namespace std;

int main()
{
	struct MyCar {
		string merk;
		int tahun_keluaran;
		string bahan_bakar;
	};
	
	MyCar mobil_1;
	mobil_1.merk = "Nissin";
	mobil_1.tahun_keluaran = 2022;
	mobil_1. bahan_bakar = "Listrik";
	
	cout << "Merk: " << mobil_1.merk << endl;
	cout << "Tahun Keluaran: " << mobil_1.tahun_keluaran << endl;
	cout << "Bahan Bakar: " << mobil_1.bahan_bakar << endl;
}