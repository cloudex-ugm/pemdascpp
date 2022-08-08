// Menginisialisasi pointer pada string menggunakan char*

#include <iostream>

int main()
{
    const char* pprize1 {"Sepeda"}; 
    const char* pprize2 {"Kompor Gas"}; 
    const char* pprize3 {"TV 30inch"}; 
    const char* pprize4 {"Kipas Angin"}; 
    const char* pprize5 {"Microwave"}; 
    const char* pprize6 {"Blender"}; 
    const char* pprize7 {"Kulkas 1 Pintu"}; 
    const char* pprize8 {"Power Bank"}; 
    const char* pprz {"Hadiah doorprize Anda adalah "};

    std::cout << "Pilih satu doorprize! Masukkan 1 angka diantara 1 hingga 8: ";
    size_t choice {}; 
    std::cin >> choice;

    switch (choice)
    {
        case 1: std::cout << pprz << pprize1 << std::endl; break; 
        case 2: std::cout << pprz << pprize2 << std::endl; break; 
        case 3: std::cout << pprz << pprize3 << std::endl; break; 
        case 4: std::cout << pprz << pprize4 << std::endl; break; 
        case 5: std::cout << pprz << pprize5 << std::endl; break; 
        case 6: std::cout << pprz << pprize6 << std::endl; break; 
        case 7: std::cout << pprz << pprize7 << std::endl; break; 
        case 8: std::cout << pprz << pprize8 << std::endl; break;
        default: std::cout << "Maaf, Anda belum beruntung." << std::endl;
    }
}