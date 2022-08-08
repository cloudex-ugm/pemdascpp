#include <bits/stdc++.h>
using namespace std;
int main(){
   //membuat kontainer stack
   stack <int> tumpukan;
   //memberikan elemen elemen stack
   tumpukan.push(20);
   tumpukan.push(40);
   tumpukan.push(60);
   tumpukan.push(80);
   //cek apakah value sudah masuk dalam tumpukan
   //menggunakan empty()
   if(!tumpukan.empty()){
      //menghitung ukuran stack
      cout<<"Ukuran stack: "<< tumpukan.size();
   }
   else{
      cout<<"Stack kosong";
   }
   cout<<"\nElemen elemen pada stack";
   while(!tumpukan.empty()){
      cout<<" "<< tumpukan.top();
      tumpukan.pop();
   }
   return 0;
}