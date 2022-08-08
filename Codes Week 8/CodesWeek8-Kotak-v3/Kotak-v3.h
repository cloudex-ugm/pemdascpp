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
		Kotak(float sisi_sama);
		Kotak(float nilai_panjang, float nilai_lebar, float nilai_tinggi);
		
		float getPanjang();
		float getLebar();
		float getTinggi();
		
		// Membuat setter dengan return type reference
		//	 ke objek Kotak yang memanggil fungsi setter
		Kotak& setPanjang(float value);
		Kotak& setLebar(float value);
		Kotak& setTinggi(float value);
		float hitungArea();
};

#endif