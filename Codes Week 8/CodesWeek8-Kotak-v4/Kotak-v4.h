using namespace std;

#ifndef KOTAK_H
#define KOTAK_H

class Kotak {
	private:
		float panjang = 1;
		float lebar = 1;
		float tinggi = 1;

	public:
		Kotak();
		Kotak(float sisi_sama);
		Kotak(float nilai_panjang, float nilai_lebar, float nilai_tinggi);
		
		// Menambahkan keyword const
		// untuk memberitahu bahwa fungsi berikut tidak
		// mengubah kondisi internal objek
		float getPanjang() const;
		float getLebar() const;
		float getTinggi() const;
		
		Kotak& setPanjang(float value);
		Kotak& setLebar(float value);
		Kotak& setTinggi(float value);
		float hitungArea() const;
};

#endif