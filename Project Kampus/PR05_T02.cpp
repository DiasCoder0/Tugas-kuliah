
#include <iostream>


int main() {
    int rows;
    std::cout << "Masukkan jumlah baris: ";
    std::cin >> rows;
    int i = 1;
    do {
        // Perulangan untuk mencetak spasi di awal setiap baris
        int j = 1;
        while (j <= rows - i) {
            std::cout << " ";
            j++;
        }
        // Perulangan untuk mencetak bintang
        int k = 1;
        do {
            std::cout << "*";
            k++;
        } while (k <= 2 * i - 1);
        std::cout << std::endl; // Pindah ke baris berikutnya
        i++;
    } while (i <= rows); // Perulangan utama untuk setiap baris segitiga
    return 0;
}

