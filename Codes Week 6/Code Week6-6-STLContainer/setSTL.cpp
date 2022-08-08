#include<bits/stdc++.h>
using namespace std;
int main()
{
// deklarasi unordered_set .
unordered_set < int > stu;
// menambahkan elemen ke unordered_set  . 
stu . insert ( 14 ) ;
stu . insert ( 15 ) ;
stu . insert ( 22 ) ;
stu . insert ( 14 ) ;   // duplikasi ditambbahkan .
stu . insert ( 16) ;
stu . insert ( 8 ) ;
unordered_set < int > :: iterator it1 , it2 ;
cout << " elemen dari set yang tidak diurutkan \n " ;
for ( it1 = stu.begin() ; it1 != stu.end() ; it1++ )
{
cout <<  *it1 << " " ;
}
// menghapus elemen 14 
it2 = stu.find ( 14 ) ;
stu.erase( it2 ) ;
cout<< "\n elemen dari unordered_set setelah menghapus sebuah elemen : \n " ;
for(  it1 = stu.begin() ; it1 != stu.end() ; it1++ )
{
cout << *it1 << " " ;
} 
return 0;
}