#include <iostream>
#include <string>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class Smartphone{     // kelas dasar
   public:
       string name = "Moto";
       int camera = 16;
       int storage = 8;
};
/*———————————————————————————————————————————————————————————————————————————*/
class HeloMoto : public Smartphone{     // kelas turunan
   public:
       void colour(){
           cout << "Sapphire Blue";
       }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main(){

   HeloMoto G9;
   cout << "Fitur " << G9.name << " :\n\n";
   cout << "Kamera : " << G9.camera << " Mega Pixels" << endl;
   cout << "Penyimpanan : " << G9.storage << " GB" << endl;
   cout << "Warna : ";
  
   G9.colour();
  
   cout << endl;
   
   return 0;
}
/*———————————————————————————————————————————————————————————————————————————*/
