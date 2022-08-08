#include<iostream>
#include<string>
#include<sstream> // Perhatikan adanya file header sstream yang perlu dimasukkan

using namespace std;

int main()
{
	// Membuat objek dari stringstream
	stringstream ss;
	string str1, str2;
	
	// Memasukkan data pada string buffer
	ss.str("Hello World");
	
	// Melakukan ekstraksi data yang ada di string buffer
	// untuk disimpan pada variabel str1 dqn str1
	ss >> str1; // Substring "Hello' disimpan pada str1
	ss >> str2; // Sisa substring, yaitu "World" disimpan pada str2
	
	cout << str1 << endl; // Hasil: Hello
	cout << str2 << endl; // Hasil: World
}

