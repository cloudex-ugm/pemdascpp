#include <iostream>
using namespace std;

class Base {
   private:
    int priv = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // fungsi mengakses private member
    int getPRV() {
        return priv;
    }
};

class ProtectedDerived : protected Base {
   public:
    // fungsi mengakses protected member dari Base
    int getProt() {
        return prot;
    }

    // fungsi mengakses public member dari Base
    int getPub() {
        return pub;
    }
};

int main() {
    ProtectedDerived PD1;
    cout << "Privat tidak dapat diakses." << endl;
    cout << "Terproteksi = " << PD1.getProt() << endl;
    cout << "Publik = " << PD1.getPub() << endl;
    return 0;
}