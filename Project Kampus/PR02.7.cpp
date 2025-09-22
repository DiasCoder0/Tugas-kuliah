#include <iostream>
using namespace std;

int main() {
    string nama = "Dias Faizullah Parvez";         // string nama peminjam
    string alamat = "Jalan Raden Patah III No.56"; // string alamat peminjam
    string mu = "Rupiah";                          // string nama mata uang
    int lama_pinjam = 3;                           // integer durasi lama peminjaman uang
    int jumlah_uang = 1000000;                     // integer jumlah uang yang dipinjam
    cout << "Nama                   : " << nama << endl;
    cout << "Alamat                 : " << alamat << endl;
    cout << "Mata Uang              : " << mu << endl;
    cout << "Jumlah Pinjaman        : " << "Rp." << jumlah_uang << endl;
    cout << "Lama durasi pinjaman   : " << lama_pinjam << " Bulan" << endl;

    return 0;
}