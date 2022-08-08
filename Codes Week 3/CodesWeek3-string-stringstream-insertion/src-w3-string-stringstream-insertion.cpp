#include<iostream>
#include<string>
#include<sstream> // Perhatikan adanya file header sstream yang perlu dimasukkan

using namespace std;

int main()
{
	// Membuat objek dari stringstream
	stringstream ss;
	string str1 = "Hello, World!";
	
	// Memasukkan string pada string buffer
	// dari stringstream ss
	ss << str1;
	
	// Alternatif memasukkan string pada string buffer
	ss.str(str1);
	
	// Mengakses stream buffer yang saat ini ada pada
	// stringstream ss dengan fungsi .str() untuk ditampilkan
	// pada standar output
	cout << ss.str() << endl;
}

