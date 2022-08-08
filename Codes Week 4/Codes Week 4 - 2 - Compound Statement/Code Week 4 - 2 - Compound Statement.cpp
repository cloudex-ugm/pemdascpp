#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh compund statement
    Statement ini merupakan sekumpulan/blok kode/urutan dari beberapa statement yang menjadi kesatuan.
    Contohnya adalah BLOK KODE pada if-statement.

    Catatan: Blok kode dimulai dengan simbol '{' dan diakhiri dengan simbol '}'. 
    Statement-statement berada di dalam kurung kurawal.
    */

    int x = 5;  // deklarasi nilai x

    if (x < 10)          	    // awal dari if-statement
    {                    	    // awal dari BLOK KODE
        float a = 5.5f;         // statement assignment. meng-assign nilai float 5.5
        cout << a; 	            // statement ekspresi. print nilai variabel a
    } 			                // akhir dari BLOK KODE, if-statement selesai

    
    return 0;       

}