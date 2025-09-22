#include <iostream>
#include <cmath> // untuk pow()
using namespace std;

int main() {
    //menghitung rata-rata nilai mahasiswa 
    string nama;
    int nilai1, nilai2, nilai3;
    double rata_rata;
    cout << "Masukkan nama mahasiswa: ";
    cin >> nama;
    cout << "Masukkan nilai 1: ";
    cin >> nilai1;
    cout << "Masukkan nilai 2: ";
    cin >> nilai2;
    cout << "Masukkan nilai 3: ";
    cin >> nilai3;
    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;
    cout << "Rata-rata nilai " << nama << " adalah " << rata_rata << endl;
    if (rata_rata >= 80) {
        cout << "Status: Lulus dengan baik" << endl;
    } else if (rata_rata >= 79 && rata_rata >= 60) {
        cout << "Status: Lulus" << endl;
    } else if (rata_rata < 60) {
        cout << "Status: Tidak lulus" << endl;
    }
    
    return 0;
}