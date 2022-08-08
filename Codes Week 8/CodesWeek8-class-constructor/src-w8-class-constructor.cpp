#include<iostream>
using namespace std;

int main()
{
	// Membuat kelas Kotak
	class Kotak {
		private:
			float panjang = 1;
			float lebar = 1;
			float tinggi = 1;

		public:
			// Mendefinisikan Constructor
			// Constructor default
			Kotak() = default;
			
			// Constructor buatan
			Kotak(float nilai_panjang, float nilai_lebar, float nilai_tinggi){
				cout << "Kotak baru dibentuk" << endl;
				panjang = nilai_panjang;
				lebar = nilai_lebar;
				tinggi = nilai_tinggi;
			}
			
			float hitungArea(){
				return panjang * lebar * tinggi;
			};
	};
	
	Kotak kotak1;
	cout << kotak1.hitungArea() << endl;
	
	Kotak kotak2(12, 10, 5);
	cout << kotak2.hitungArea() << endl;
}