// Menghitung bilangan prima menggunakan alokasi memori dynamic

#include <iostream>
#include <iomanip>
#include <cmath> // Library untuk fungsi akar kuadrat

int main()
{
    size_t max {}; // Banyak bilangan prima yang dimuat

    std::cout << "Berapa banyak bilangan prima yang ingin ditampilkan? ";
    std::cin >> max; // Membaca banyakya bilangan prima
    
    if (max == 0) return 0; // Jika 0, maka tidak menampilkan apa-apa
    auto* primes {new unsigned[max]}; // Alokasikan memori untuk bilangan prima maksimal

    size_t count {1}; // Hitungan bilangan prima ditemukan
    primes[0] = 2; // Masukkan prima pertama
    
    unsigned trial {3}; // Kandidat prima pertama
    while (count < max)
    {
        bool isprime {true}; // Mengidentifikasi ketika bilangan prima ditemukan

        const auto limit = static_cast<unsigned>(std::sqrt(trial)); 
        for (size_t i {}; primes[i] <= limit && isprime; ++i)
        {
            isprime = trial % primes[i] > 0; // Salah untuk bilangan yang dapat dibagi
        }

        if (isprime) // Ketika mendapatkan 1 bilangan prima
            primes[count++] = trial; // ...Menyimpan nilai ke array prima

        trial += 2; // Pengulangan untuk nilai selanjutnya
    }

    // Memplot output bilangan prima ke 10 ke baris
    for (size_t i{}; i < max; ++i)
    {
        std::cout << std::setw(10) << primes[i]; 
        if ((i + 1) % 10 == 0) // Setelah bilangan prima ke-10...
            std::cout << std::endl; // ...memulai baris berikutnya
    }

    std::cout << std::endl;

    delete[] primes; // Mengosongkan memori
    primes = nullptr; // ... dan mereset pointer
}


    int twoDimArray[2][4];
    twoDimArray[0][0] = 6;
    twoDimArray[0][1] = 0;
    twoDimArray[0][2] = 9;
    twoDimArray[0][3] = 6;
    twoDimArray[1][0] = 2;
    twoDimArray[1][1] = 0;
    twoDimArray[1][2] = 1;
    twoDimArray[1][3] = 1;


    int twoDimArray[2][4] = { 6, 0, 9, 6, 2, 0, 1, 1 }; 
    int twoDimArray[2][4] = { { 6, 0, 9, 6 } , { 2, 0, 1, 1 } };