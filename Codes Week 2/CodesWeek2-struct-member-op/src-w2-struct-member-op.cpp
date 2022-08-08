#include<iostream>
#include<string>
using namespace std;

int main()
{	
	struct MyCar {
		string merk;
		int tahun_keluaran;
		string bahan_bakar;
	
		MyCar(string merk_constructor, int tahun_keluaran_constructor, string bahan_bakar_constructor){
			merk = merk_constructor;
			tahun_keluaran = tahun_keluaran_constructor;
			bahan_bakar = bahan_bakar_constructor;
		}
	};
	
MyCar mobil_1("Nissin", 2022, "Listrik");

// Melakukan modifikasi pada member objek mobil_1
// Mengganti nama merk
mobil_1.merk = "Toyoti";

// Mengurangi tahun keluaran
mobil_1.tahun_keluaran -= 10;

cout << "Merk: " << mobil_1.merk << endl;
cout << "Tahun Keluaran: " << mobil_1.tahun_keluaran << endl;
cout << "Bahan Bakar: " << mobil_1.bahan_bakar << endl;
}