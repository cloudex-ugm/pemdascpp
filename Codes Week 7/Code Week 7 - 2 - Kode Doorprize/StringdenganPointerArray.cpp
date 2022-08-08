// Menggunakan Pointer Array daripada Pointer char

#include <iostream>
// #include <array> // untuk deklarasi std::size()

int main()
{
    const char* pprize[] {
                            "Sepeda", "Kompor Gas",
                            "TV 30inch", "Kipas Angin",
                            "Microwave", "Blender",
                            "Kulkas 1 Pintu", "Power Bank"
                        };

    std::cout << "Pilih satu doorprize! Masukkan 1 angka diantara 1 hingga 8: "
              << std::size(pprize) << ": ";
    size_t choice {}; 
    std::cin >> choice;

    if (choice >= 1 && choice <= std::size(pprize))
    {
        std::cout << "Hadiah doorprize Anda adalah " << pprize[choice - 1] << std::endl;
    } 
    else
    {
        std::cout << "Maaf, Anda belum beruntung." << std::endl;
    }
}