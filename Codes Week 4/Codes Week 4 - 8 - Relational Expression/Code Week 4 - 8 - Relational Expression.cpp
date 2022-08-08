#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh Relational Expression
    --> Expression yang hasilnya berupa nilai boolean (true/false). 
    Maka dari itu disebut pula Boolean expression.  

    --true: mengembalikan nilai 1
    --false: mengembalikan nilai 0
    */

    // deklarasi dan inisialisasi variabel
    int x = 10;
    int y = 5;
    bool hasil1;    // var hasil1 akan digunakan untuk menampung hasil perbandingan

    hasil1 = (x <= y);      // mengandung relational statement (x <= y). 
                            // Apakah x kurang dari atau sama dengan y?

    cout << "Nilai dari var hasil = " << hasil1 << "\n";    

    // __________________________


    int a = 6; 		 
    int b = 9; 		 

    bool hasil2 = (a*x > b/y);      // mengandung relational statement (x <= y).
                                    // Apakah a*x > b/y?

    cout << "Nilai dari var hasil2 = " << hasil2 << "\n";


    return 0;       
}