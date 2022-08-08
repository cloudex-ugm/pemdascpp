//contoh meneruskan pointer sebagai arguments ke function

#include<iostream>
using namespace std;

void squareByPtr ( int * numPtr ) //meneruskan pointer sebagai arguments ke function
{ 
	*numPtr = *numPtr * *numPtr;
}

int main () { 
int x = 5;
squareByPtr (&x); //Menggunakan formula matematika pada nilai pointer
cout << x; // Menampilkan nilai dari x
}