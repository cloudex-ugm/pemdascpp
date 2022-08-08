#include<iostream>
using namespace std;

int main()
{
	int x = 5;
	int y = 0;
	
	y = ++x * 10; // Nilai x ditambah 1 terlebih dahulu, baru dikalikan
	cout << y << endl; // Hasil: 60
	cout << "Nilai x setelah operasi " << x << endl; // x = 6
	
	x = 5;
	y = x++ * 10; // Dikalikan terlebih dahulu, baru ditambah 1
	cout << y << endl; // Hasil: 50
	cout << "Nilai x setelah operasi " << x << endl; // x = 6
	
	return 0;
}