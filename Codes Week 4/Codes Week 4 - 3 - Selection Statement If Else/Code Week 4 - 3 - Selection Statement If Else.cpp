#include <iostream>

using namespace std;

int main()
{      
    /*
    Contoh selection statement: if-else statement

     -- Statement ini merupakan instruksi untuk memilih 
    salah satu dari beberapa control flow.
    */

    int apple = 15;        // Nilai variabel apple adalah 15

    if (apple < 5) {
        cout << "Terlalu sedikit apel.";        // Jika nilai variabel apple ternyata kurang dari 5, line ini akan dieksekusi
    } else if (apple < 20) {
        cout << "Jumlah apel yang tepat.";      // Jika nilai variabel apple ternyata kurang dari 20, line ini akan dieksekusi
    } else {
        cout << "Terlalu banyak apel.";         // Jika kedua syarat di sebelumnya salah, line ini akan dieksekusi
    }

    // Output: "Jumlah apel yang tepat."


    
    return 0;       

}