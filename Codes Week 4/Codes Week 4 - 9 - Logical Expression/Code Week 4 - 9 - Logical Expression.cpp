#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Logical Expression
    --> Expression yang menggabungkan lebih dari satu relational expression 
    dengan operator '&&' (dan) atau '||' (atau) dan hasilnya berupa nilai boolean (true/false).

    --true: mengembalikan nilai 1
    --false: mengembalikan nilai 0
    */

    // deklarasi dan inisialisasi nilai variabel
    int x = 5; 
    int y = 10; 
    int a = 10; 
    int b = 20; 

    /*Implementasi logical expression dalam if-else statement
    Expression 1: x==0 || b<=10
    Expression 2: x<=y && a<=b
    */

    if(x==0 || b<=10) {             // jika condition ini benar, maka string "Pilihan 1" akan di-print.
        cout << "Pilihan 1";
    } else if (x<=y && a<=b) {      // jika condition ini benar, maka string "Pilihan 2" akan di-print.
        cout << "Pilihan 2";
    } else {                                // JIka tidak ada condition yang benar, maka blok kode berikut di-print.
        cout << "Tidak ada yang benar";
    }

    return 0;       
}