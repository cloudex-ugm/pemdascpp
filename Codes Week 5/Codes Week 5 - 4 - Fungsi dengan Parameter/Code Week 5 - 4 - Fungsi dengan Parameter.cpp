#include <iostream>

using namespace std;

// deklarasi fungsi dengan return value int dan 2 parameter: int x, int y
int fungsiJumlah(int x, int y);

int main () {

   // deklarasi variabel lokal
   int x = 10;
   int y = 25;
   int hasil;
 
   // memanggil fungsiJumlah dan assign ke variabel hasil
   hasil = fungsiJumlah(x, y);
   cout << "Hasil penjumlahan 1: " << hasil << endl;

   /* memanggil fungsiJumlah lagi dan assign ke variabel hasil.
      salah satu parameter diisi dengan nilai 8 */
   hasil = fungsiJumlah(x, 8);
   cout << "Hasil penjumlahan 2: " << hasil << endl;
 
   return 0;
}

// definisi fungsi
int fungsiJumlah(int x, int y = 5) {
   int hasil = x + y;
   return (hasil);
}