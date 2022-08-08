#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Bitwise Expression
    --> Expression yang digunakan untuk mengoperasikan bit-bit (0 dan 1). 
    Jadi bitwise expression ada di tingkat bit.
    
    --Operator yang digunakan dalam bitwise expression:   &,   |,   ^,   ~,   <<,   >>
    */

    // deklarasi dan inisialisasi nilai variabel
    int a = 5;
    int b = 10;

    // berfungsi untuk menggeser bilangan biner dari integer 2 ke arah kanan sebanyak 2 bit
    // terdapat bitwise expression a >> 2
    int p = a >> 2; 

    //contoh lain:
    int q = a << 2; 
    int r = a & b; 
    int s = a | b; 
    int t = a ^ b; 

    // cetak hasil
    cout << "Nilai a >> 2 = " << p << "\n";
    cout << "Nilai a << 2 = " << q << "\n";
    cout << "Nilai a & b = " << r << "\n";
    cout << "Nilai a | b = " << s << "\n";
    cout << "Nilai a ^ b = " << t << "\n";

    return 0;       
}