#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Static Expression
    --> Expression yang hanya mengandung nilai konstan dan tidak berubah setelah kompilasi.
    */

    int a = 60;
    static int b = 75;

    int c;
    c = 4*5+2 ;

    // mencoba print nilai-nilai variabel di atas
    cout << "Nilai a = " << a << "\n";
    cout << "Nilai b = " << b << "\n";
    cout << "Nilai c = " << c << "\n";

    return 0;       

}