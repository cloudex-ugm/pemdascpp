#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh iteration statement: Do-While Loop.

    -- Statement ini mengeksekusi blok kode secara berulang.
    */

    int i = 1;              // i di sini merupakan counter variable yang nilainya akan bertambah

    do {
        cout << i << " ";
        i++;
    }
    while (i < 4);         


    /*Catatan: Jika dalam do-while loop tidak diberi increment counter variable, 
    akan terjadi infinite loop*/

    return 0;       

}