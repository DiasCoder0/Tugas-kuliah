#include <iostream>
#include <iomanip> // Diperlukan untuk mengatur presisi angka desimal (cth: 85.50)

int main() {
    // Menggunakan namespace std agar tidak perlu menulis std::cout atau std::cin
    using namespace std;

    cout << "===== Program Hitung Rata-Rata Nilai Siswa =====\n\n";

    int jumlahMapel;
    cout << "Masukkan jumlah mata pelajaran: ";
    cin >> jumlahMapel;

    // Pengecekan jika input tidak valid (0 atau negatif)
    if (jumlahMapel <= 0) {
        cout << "Jumlah mata pelajaran tidak valid. Program berhenti." << endl;
        return 1; // Keluar dari program karena input salah
    }

    double totalNilai = 0.0; // Gunakan double untuk menampung total nilai jika ada desimal
    double nilai;

    // Loop untuk meminta input nilai sebanyak jumlah mata pelajaran
    for (int i = 0; i < jumlahMapel; ++i) {
        cout << "Masukkan nilai mata pelajaran ke-" << i + 1 << ": ";
        cin >> nilai;
        totalNilai += nilai; // Menambahkan nilai yang diinput ke totalNilai
    }

    // Menghitung rata-rata
    double rataRata = totalNilai / jumlahMapel;

    // Menampilkan hasil akhir
    cout << "\n----------------------------------------\n";
    cout << "Jumlah Mata Pelajaran : " << jumlahMapel << endl;
    cout << "Total Semua Nilai     : " << totalNilai << endl;
    // Menggunakan fixed dan setprecision(2) untuk menampilkan 2 angka di belakang koma
    cout << "Rata-rata Nilai       : " << fixed << setprecision(2) << rataRata << endl;
    cout << "----------------------------------------\n";

    return 0;
}