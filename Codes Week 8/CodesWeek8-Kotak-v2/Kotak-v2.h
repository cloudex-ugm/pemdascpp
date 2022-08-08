using namespace std;

#ifndef KOTAK_H
#define KOTAK_H

class Kotak {
	private:
		float panjang = 1;
		float lebar = 1;
		float tinggi = 1;

	public:
		Kotak() = default;
		Kotak(float sisi_sama); // Constructor Baru
		Kotak(float nilai_panjang, float nilai_lebar, float nilai_tinggi);
		
		float hitungArea();
};

#endif