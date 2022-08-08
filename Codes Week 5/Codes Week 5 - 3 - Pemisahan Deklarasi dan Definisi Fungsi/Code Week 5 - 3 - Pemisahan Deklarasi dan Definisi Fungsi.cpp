#include <iostream>

using namespace std;

/*
Deklarasi dan definisi function dipisahkan 
agar pendefinisian function dapat dilakukan setelah pemanggilan fungsi.
*/

// Deklarasi fungsi bernama "fungsiJumlah" dengan tipe return "void"
void fungsiJumlah();


// main function merupakan fungsi utama dari sebuah program C++
int main()
{   
    fungsiJumlah();     // pemanggilan fungsiJumlah dalam main function
    
    return 0;                          
}

// Pendefinisian fungsi dapat dilakukan setelah pemanggilan fungsi dalam main function
void fungsiJumlah() {
  cout << "Eksekusi fungsi penjumlahan.";
}


