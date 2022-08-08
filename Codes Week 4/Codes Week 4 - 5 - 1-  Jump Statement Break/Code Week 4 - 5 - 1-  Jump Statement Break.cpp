#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Jump Statement: Break Statement.

    Break statement di bawah diimplementasikan dalam for-loop.
    Jika condition dalam if-statement bernilai true, maka break; akan dieksekusi.

    Blok kode sebenarnya akan dieksekusi selama i < 10 dengan for-loop, 
    tetapi akan berhenti (break) ketika i == 7 karena adanya if-condition.
    */

    for (int i = 1; i < 10; i++) {
        if (i == 7) {
            break;
        }
        cout << i << " ";
    }

    return 0;       

}