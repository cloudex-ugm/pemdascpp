#include<iostream>
using namespace std;

int main()
{
	// Membuat kelas Kotak
	class Kotak {
		// Membuat member-member dengan tipe akses private
		private:
			float panjang = 1;
			float lebar = 1;
			float tinggi = 1;
			
		// Membuat member-member dengan tipe akses private	
		public:
			float hitungArea(){
				return panjang * lebar * tinggi;
			};
	};
	
	// Membuat instance/objek dari tipe data Kotak
	Kotak kotak1;
	
	// Mengakses dan mengeksekusi fungsi hitungArea pada kotak1
	cout << kotak1.hitungArea() << endl; // Hasil: 1
}