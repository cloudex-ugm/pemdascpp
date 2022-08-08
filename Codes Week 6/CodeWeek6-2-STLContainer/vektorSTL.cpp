#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> vt = { 55,65,75,85,95},vt1;      //deklarasi vt dengan value, vt1 sebagai vektor.
   vector<int>::iterator iterr;                  //deklarasi iterator
   iterr = vt.insert(vt.begin(), 40);              //menyisipkan value pada vt di awal.
   iterr = vt.insert(vt.begin(), 1, 30);           //menyisipkan value dengan ukuran pada vt vector di awal.
   cout << "elemen dari vektor 1: \n";
   for (iterr = vt.begin(); iterr != vt.end(); ++iterr)
      cout << *iterr << " "<<endl;             // print value dari vektor vt
   vt1.insert(vt1.begin(), vt.begin(), vt.end()); //insert semua value dari vt pada vector vt1.
   cout << "Elemen Elemen vektor 2: \n";
   for (iterr = vt1.begin(); iterr != vt1.end(); ++iterr)
      cout << *iterr << " "<<endl;            // print values vektor vt1
   return 0;
}