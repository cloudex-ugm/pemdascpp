#include <iostream>
#include <string>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class siswa{     // kelas dasar 1
    int NoReg;
    string nama;
    public:
        void dataSiswa(){
            cout << "Masukkan Noreg dan nama : ";
            cin >> NoReg >> nama;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class nilai: public siswa{     //kelas turunan 1
    protected:
        int nilai_mat, nilai_fis, nilai_kim;
    public:
        void getNilai(){
            cout << "Masukkan nilai 3 mape; : ";
            cin >> nilai_mat >> nilai_fis >> nilai_kim;
   }
};
/*———————————————————————————————————————————————————————————————————————————*/
class olga{     // kelas dasar 2
    protected:
        int nilaiOR;
    public:
        void olahRaga(){
            cout << "Masukkan Nillai olahraga : ";
            cin >> nilaiOR;
            cout << endl;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class hasil : public nilai, public olga{     // kelas turunan 2
    int total_nilai;
    float rerata_nilai;
    public :
        void tampilkan(){
            total_nilai = nilai_mat + nilai_fis + nilai_kim;
            rerata_nilai = total_nilai / 3.0;
            cout << "Total nilai = " << total_nilai << endl;
            cout << "Rerata nilai = " << rerata_nilai << endl;
            cout << "Rerata+ nilai olahraga = " << rerata_nilai + nilaiOR << endl;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main(){
    hasil hsl; //objek
    
    hsl.dataSiswa();
    hsl.getNilai();
    hsl.olahRaga();
    hsl.tampilkan();
    return 0;
}
