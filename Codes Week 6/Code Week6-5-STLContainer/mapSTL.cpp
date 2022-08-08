// implementasi dari map
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{

	// mengosongkan kontainer map
	map<int, int> kuisgrup1;

	// menambahkan elemen dengan urutan acak
	kuisgrup1.insert(pair<int, int>(1, 20));
	kuisgrup1.insert(pair<int, int>(2, 30));
	kuisgrup1.insert(pair<int, int>(3, 70));
	kuisgrup1.insert(pair<int, int>(4, 40));
	kuisgrup1.insert(pair<int, int>(5, 50));
	kuisgrup1.insert(pair<int, int>(6, 50));
	kuisgrup1.insert(pair<int, int>(7, 80));

	// print map kuisgrup1
	map<int, int>::iterator itr;
	cout << "\nMap dari kuisgrup1 : \n";
	cout << "\tKunci\tElemen\n";
	for (itr = kuisgrup1.begin(); itr != kuisgrup1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// penugasan elemen dari kuisgrup1 ke kuisgrup2
	map<int, int> kuisgrup2(kuisgrup1.begin(), kuisgrup1.end());

	// print semua elemen map kuisgrup2
	cout << "\nMap kuisgrup2 setelah"
		<< " penugasan dari kuisgrup1 adalah : \n";
	cout << "\tKunci\tElemen\n";
	for (itr = kuisgrup2.begin(); itr != kuisgrup2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// menghapus semua elemen sampai elemen dengan key=3 di kuisgrup2
	cout << "\nkuisgrup2 setelah menghapus elemen dengan kunci kurang dari 3 : \n";
    cout << "\tKunci\tElemen\n";
	kuisgrup2.erase(kuisgrup2.begin(), kuisgrup2.find(3));
	for (itr = kuisgrup2.begin(); itr != kuisgrup2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	// menghapus semua elemen dengan key = 4
	int num;
	num = kuisgrup2.erase(4);
	cout << "\nkuisgrup2.menghapus key 4 : ";
	cout << "\tKey\tElemen\n";
	for (itr = kuisgrup2.begin(); itr != kuisgrup2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;

	// batas bawah dan batas atas untuk kuisgrup1 dengan key = 5
	cout << "batas bawah kuisgrup1(5) : "
		<< "\tKEY = ";
	cout << kuisgrup1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << kuisgrup1.lower_bound(5)->second
		<< endl;
	cout << "\n batas atas kuisgrup1(5) : "
		<< "\tKEY = ";
	cout << kuisgrup1.upper_bound(5)->first << '\t';
	cout << "\tElemen = " << kuisgrup1.upper_bound(5)->second
		<< endl;

	return 0;
}
