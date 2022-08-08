#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Casting
    --> Casting adalah proses mengubah tipe data.
    */

    // diberikan nilai awal sebuah integer 99
    int integerNumber = 99;     

    
    // 1. Implicit Conversion
    float floatNumber1 = integerNumber;
    // Assign suatu variabel dengan suatu tipe data ke variabel dengan tipe data lain.
    cout << "Hasil implicit conversion: floatNumber1 = " << floatNumber1 << "\n";


    // 2. Explicit Conversion
    float floatNumber2 = (float) integerNumber * 10;
    // Programmer secara eksplisit melakukan konversi dengan mendefinisikan "(float)" sebelum nama variabel.
    cout << "Hasil explicit conversion: floatNumber2 = " << floatNumber2 << "\n";

    return 0;       
}