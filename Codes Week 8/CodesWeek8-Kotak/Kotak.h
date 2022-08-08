using namespace std;

// Perhatikan adanya pre-processing agar compiler
// mengetahui apa yang harus dilakukan dengan file Kotak.h
// dalam hal ini mendefinisikan sebuah class Kotak, pada header file Kotak.h
#ifndef KOTAK_H
#define KOTAK_H

class Kotak {
	private:
		float panjang = 1;
		float lebar = 1;
		float tinggi = 1;

	public:
		Kotak() = default;
		Kotak(float nilai_panjang, float nilai_lebar, float nilai_tinggi);
		
		float hitungArea();
};

#endif