#include<iostream>
using namespace std;

int main()
{
	float value_1 = 12.9;
	float value_2 = 11.2;
	int jumlah = 0;
	
	jumlah = static_cast<int>(value_1 + value_2); 
	cout << jumlah << endl; // Hasil jumlah = 24
	
	jumlah = static_cast<int>(value_1) + static_cast<int>(value_2);
	cout << jumlah << endl; // Hasil jumlah = 23
}