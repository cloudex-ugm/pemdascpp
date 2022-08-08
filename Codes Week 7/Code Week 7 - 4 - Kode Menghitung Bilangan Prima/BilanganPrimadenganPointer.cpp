// Menghitung bilangan prima menggunakan notasi pointer

#include <iostream>
#include <iomanip>

int main()
{
    const size_t max {100}; // Jumlah bilangan prima yang dibutuhkan 
    long primes[max] {2L}; // Mendefinisikan bilangan prima yang pertama
    size_t count {1}; // Hitungan bilangan prima ditemukan sejauh ini
    long trial {3L}; // Kandidat bilangan prima

    while (count < max)
    { 
        bool isprime {true}; // Menunjukkan kapan bilangan prima ditemukan

        // Membagi dengan semua kandidat bilangan prima yang dimiliki
        for (size_t i {}; i < count && isprime; ++i)
        {
            isprime = trial % *(primes + i) > 0; // Logika salah untuk pembagian yang tepat, yang menunjuk ke pointer
        }

        if (isprime)
        { // Ketika menemukan 1 bilangan prima....
            *(primes + count++) = trial; // akan menyimpan bilangan prima yang ditemukan di array
        }

        trial += 2; // Memeriksa nilai selanjutnya
    }

    // Memplot output bilangan prima ke 10 ke baris
    std::cout << max << " Bilangan prima pertama adalah:" << std::endl;
    for (size_t i{}; i < max; ++i)
    {
        std::cout << std::setw(7) << *(primes + i);
        if ((i+1) % 10 == 0) // Penambahan baris baru setelah bilangan prima ke-10
            std::cout << std::endl;
    }
    std::cout << std::endl;
}