#include <iostream>
#include <cmath> // untuk pow()
using namespace std;

int main() {
    //Konversi detik ke jam, menit, dan detik
    int total_detik, jam, menit, detik;

    cout << "Masukkan total detik: " << endl;
    cin >> total_detik;
    jam = total_detik / 3600;
    menit = (total_detik % 3600) / 60;
    detik = total_detik % 60;
    cout << total_detik << " detik = " << jam << " jam, "<< menit << " menit, " << detik << " detik" << endl;
    
    return 0;
}