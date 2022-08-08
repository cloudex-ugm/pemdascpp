#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh selection statement: Switch Case Statement.

    -- Statement ini merupakan instruksi untuk memilih 
    salah satu dari beberapa control flow.

    */

    int jawab = 4;          // Nilai variabel jawab adalah 4

    switch (jawab) {
    case 3:
        cout << "Jawabannya adalah 3";      // Jika nilai variabel jawab = 3, line ini akan dieksekusi
        break;
    case 4:
        cout << "Jawabannya adalah 4";      // Jika nilai variabel jawab = 4, line ini akan dieksekusi
        break;
    default:
        cout << "Jawabannya bukan 3 atau 4";        // default: Jika syarat-syarat sebelumnya tidak terpenuhi, line ini akan dieksekusi
    }

    // Output: " Jawabannya adalah 4"

    return 0;       

}