// Contoh kode untuk iterator insert
#include<iostream>
#include<iterator> // standar library untuk iterator
#include<vector> // standar library untuk vector
using namespace std;
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };
	vector<int> ar1 = {10, 20, 30};
	
	// Mendeklarasikan iterator ke dalam sebuah vektor
	vector<int>::iterator ptr = ar.begin();
	
	// Memajukan iterator dengan n posisi elemen melalui fungsi advance
	advance(ptr, 3);
	
	// menyalin 1 elemen vektor yang lain dengan inserter()
	// menyisipkan ar1 setelah posisi ketiga didapat oleh ar
	copy(ar1.begin(), ar1.end(), inserter(ar,ptr));
	
	// Menampilkan elemen vektor yang baru
	cout << "Vektor yang baru setelah penyisipan elemen adalah:  ";
	for (int &x : ar)
		cout << x << " ";
	
	return 0;	
}
