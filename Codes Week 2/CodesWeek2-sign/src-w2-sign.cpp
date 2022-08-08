#include<iostream>
using namespace std;

int main()
{
	int ini_signed_integer = -11000;
	signed ini_juga_signed_integer = -100000000;
	unsigned int ini_unsigned_integer = 1234567;
	unsigned int ini_unsigned_integer_tapi_salah = -1234567; // Nilai tidak valid
	
	cout << ini_unsigned_integer_tapi_salah << endl; // Akan menghasilkan angka yang salah
	
	return 0;
}