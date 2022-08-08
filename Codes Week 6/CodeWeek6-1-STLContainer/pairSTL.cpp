// pair pada STL
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
	pair<string, int> p1;
	pair<string, int> p2("Quiz", 8);
	pair<string, int> p3(p2);
	pair<int, int> p4(7, 14);

	p1 = make_pair(string("STL"), 1);
	p2.first = ".com";
	p2.second = 2;

	cout << "Pasangan p" << p1.second << " dengan "
		<< "nilai " <<p1.first << "." << endl
		<< endl;

	cout << "Pasangan p" << p3.second << " dengan value "
		<< p3.first
		<< "Pasangan ini diinisialisasi dari salinan "
		<< "pasangan p2" << endl
		<< endl;

	cout << "Pasangan p" << p2.second << " dengan nilai "
		<< p2.first << "\nNilai dari pasangan ini"
		<< " berubah setelah inisialisasi." << endl
		<< endl;

	cout << "Ini pasangan p4 dengan nilai " << p4.first
		<< " dan " << p4.second
		<< " dibuat untuk menunjukkan penjumlahan. \n "
		<< "Jumlah dari value pada pasangan ini "
		<< p4.first + p4.second << "." << endl
		<< endl;

	cout << "We can concatenate the values of"
		<< " the pairs g1, g2 and g3 : "
		<< p1.first + p3.first + p2.first << endl
		<< endl;

	cout << "Kita juga dapat menukar pasangan "
		<< "(tetapi tipe pasangan harus sama) : " << endl;
	cout << "Sebelum penukaran, "
		<< "p1 memiliki " << p1.first << " dan p2 "
		<< p2.first << endl;
	swap(p1, p2);
	cout << "Setelah penukaran, "
		<< "p1 " << p1.first << " dan p2 "
		<< p2.first;

	return 0;
}
