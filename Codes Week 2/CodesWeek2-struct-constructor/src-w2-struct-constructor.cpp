#include<iostream>
#include<string>
using namespace std;

int main()
{	
	struct MyCar {
		string merk;
		int tahun_keluaran;
		string bahan_bakar;
	
		// Constructor memiliki nama fungsi yang sama 
		// dengan nama tipe data struct
		MyCar(string merk_constructor, int tahun_keluaran_constructor, string bahan_bakar_constructor){
			merk = merk_constructor;
			tahun_keluaran = tahun_keluaran_constructor;
			bahan_bakar = bahan_bakar_constructor;
		}
	};
	
	// Variabel 'mobil_1' diberikan nilai secara langsung lewat constructor
	MyCar mobil_1("Nissin", 2022, "Listrik");
	
	cout << "Merk: " << mobil_1.merk << endl;
	cout << "Tahun Keluaran: " << mobil_1.tahun_keluaran << endl;
	cout << "Bahan Bakar: " << mobil_1.bahan_bakar << endl;
}