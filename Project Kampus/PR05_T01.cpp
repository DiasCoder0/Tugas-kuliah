#include <iostream>


int main() {
    int rows;

    std::cout << "Masukkan jumlah baris: ";
    std::cin >> rows;

    int i = 1;
    // Perulangan utama untuk membuat baris
    do {
        int j = 1;
        // Perulangan untuk mencetak bintang di setiap baris
        do {
            std::cout << "* ";
            j--;
        } while (j <= i);

        // Pindah ke baris baru setelah satu baris selesai
        std::cout << std::endl;
        i--;
    
    } while (i <= rows);
    

    return 0;
}
