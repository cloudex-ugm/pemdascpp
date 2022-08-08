#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh iteration statement: While Loop.

    -- Statement ini mengeksekusi blok kode secara berulang.
    */

    int i = 0;      // i di sini merupakan counter variable yang nilainya akan bertambah

    while (i < 3) {             // selama nilai i masih kurang dari 3, blok kode dalam {} akan dieksekusi
        cout << i << "\n";      
        i++;                    // nilai i akan dikenai increment (ditambah 1) tiap perulangan
    }

    /*Catatan: Jika dalam while loop tidak diberi increment counter variable, 
    akan terjadi infinite loop*/

    return 0;       

}