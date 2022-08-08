#include <iostream>

/* iostream: library yang digunakan untuk proses input dan output streams.
   Contoh penggunaan object cin dan cout     */

using namespace std;

int main() {

   int a, b, c;   // deklarasi variabel

   // object cout digunakan untuk menampilkan output ke standard output device
   cout << "Masukkan nilai int a = ";
   // object cin digunakan untuk mengambil input dari standard input device
   cin >> a;


   
   cout << "Masukkan nilai int b dan c = ";
   /* object cin dapat mengambil lebih dari 1 nilai. 
      pisahkan input dengan spasi/enter */
   cin >> b >> c;

   cout << "Jumlahan dari angka ke-1 dan ke-2 = " << a*(b+c) << endl;

   return 0;
}
