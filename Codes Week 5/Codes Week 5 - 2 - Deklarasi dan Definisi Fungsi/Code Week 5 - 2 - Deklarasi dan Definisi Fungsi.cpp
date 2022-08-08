#include <iostream>

using namespace std;

/*
    Deklarasi dan definisi fungsiJumlah dijadikan satu 
    sehingga harus dilakukan sebelum pemanggilan fungsiJumlah, 
    sebab compiler belum "mengenali" fungsi tersebut.
*/


 // Deklarasi dan definisi fungsi bernama "fungsiJumlah" dengan tipe return "void"
void fungsiJumlah() {			               
    cout << "Eksekusi fungsi penjumlahan.";	   
}


// main function merupakan fungsi utama dari sebuah program C++
int main()
{   
    fungsiJumlah();     // pemanggilan fungsiJumlah dalam main function
    
    return 0;                          
}


