#include<iostream>
using namespace std;

int main()
{
	char my_char = 'A';
	
	cout << "Char dalam bentuk Encoded: " << my_char << endl; // Hasil: A
	cout << "Char dalam bentuk Integer: " << static_cast<int>(my_char) << endl; // Hasil: 65
}