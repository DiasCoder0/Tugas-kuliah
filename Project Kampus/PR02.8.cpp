#include <iostream>
#include <cmath> // untuk pow()
using namespace std;

int main() {
    //keliling persegi panjang
    int panjang, lebar;
    
    cout << "Masukkan panjang persegi panjang (cm): " << endl;
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang (cm): " << endl;
    cin >> lebar;
    cout << "Keliling persegi panjang = " << 2 * (panjang + lebar) << "cm" << endl;

    //luas trapesium
    int alas1, alas2, tinggi;

    cout << "Masukkan alas 1 trapesium (cm): " << endl;
    cin >> alas1;
    cout << "Masukkan alas 2 trapesium (cm): " << endl;
    cin >> alas2;
    cout << "Masukkan tinggi trapesium (cm): " << endl;
    cin >> tinggi;
    cout << "Luas trapesium = " << 0.5 * (alas1 + alas2) * tinggi << "cm^2" << endl;

    return 0;
}