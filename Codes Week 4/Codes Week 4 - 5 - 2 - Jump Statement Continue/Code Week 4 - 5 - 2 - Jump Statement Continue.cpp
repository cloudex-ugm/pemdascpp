#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Jump Statement: Continue Statement.

    Continue statement di bawah diimplementasikan dalam while-loop.
    Jika condition dalam if-statement bernilai true, maka continue; akan dieksekusi.
    */

    int i = 0;              // i adalah counter variable
    
    while (i < 7) {         // Blok kode sebenarnya akan dieksekusi selama i < 7 dengan while-loop.
        if (i == 3) {       // Namun, ketika i == 3, dilakukan "continue" sehingga indeks ke-3 tidak dieksekusi.
            i++;            // Perulangan akan dilanjutkan ke indeks i = 4
            continue;   
        }
        cout << i << " ";
        i++;
    }

    return 0;       

}