#include <iostream>
#include <ctime>

using namespace std;
 
int main (){

   // mengembalikan nilai berupa lama waktu sejak epoch
   // epoch time atau unix time: waktu yang berlalu sejak 1/1/1970, 00:00 GMT
   time_t waktu = time(NULL);
   
   cout<<"Waktu sejak epoch: " << waktu<< " detik\n";

   // konversi waktu sejak epoch ke calendar time dalam character representation
   // (waktu dalam GMT)
   cout<< asctime(localtime(&waktu));

   return 0;
}
