#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh iteration statement: For Loop.

    -- Statement ini mengeksekusi blok kode secara berulang.

    i merupakan counter variable.
    Counter variable dapat dideklarasikan sebelum for-loop atau dalam "condition" for loop
    Pada kode di bawah ini, counter variable ada di dalam condition dari for-loop
    */
    
    // selama counter (i) masih kurang dari 4, kode dalam {} akan dieksekusi
    for (int i = 0; i < 4; i++) {       
        cout << i << "\t";
    }
     

    return 0;       

}