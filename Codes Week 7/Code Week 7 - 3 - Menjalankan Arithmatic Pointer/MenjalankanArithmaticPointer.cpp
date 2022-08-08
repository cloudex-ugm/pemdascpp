#include <iostream>
#include <iomanip>

void fp(char v[], int size) 
{
    for (int i=0; i!=size; ++i)
        use(v[i]); //berharap v memiliki setidaknya elemen ukuran

    for (int x : v)
        use(x); //error: range - for tidak berfungsi untuk pointer

    const int N = 7; 
    char v2[N]; 
    
    for (int i=0; i!=N; ++i)
        use(v2[i]);
    for (int x : v2)
        use(x); //range - untuk menjalankan array dengan ukuran yang diketahui 
}