#include <iostream>
#include <cmath> // untuk pow()
using namespace std;

int main() {
    //Luas dan keliling persegi
    int panjang, lebar;
    
    cout << "Masukkan panjang persegi (cm): " << endl;
    cin >> panjang;
    cout << "Masukkan lebar persegi (cm): " << endl;
    cin >> lebar;
    cout << "Luas persegi = " << panjang * lebar << "cm^2" << endl;
    cout << "Keliling persegi = " << 2 * (panjang + lebar) << "cm" << endl;

    //Luas dan keliling persegi panjang
    int panjang_pp, lebar_pp;;

    cout << "Masukkan panjang persegi panjang (cm): " << endl;
    cin >> panjang_pp;
    cout << "Masukkan lebar persegi panjang (cm): " << endl;
    cin >> lebar_pp;
    cout << "Luas persegi panjang = " << panjang_pp * lebar_pp << "cm^2" << endl;
    cout << "Keliling persegi panjang = " << 2 * (panjang_pp + lebar_pp) << "cm" << endl;

    //Luas dan keliling lingkaran
    int jari_jari;
    const float phi = 3.14;
    cout << "Masukkan jari-jari lingkaran (cm): " << endl;
    cin >> jari_jari;
    cout << "Luas lingkaran = " << phi * pow(jari_jari, 2) << "cm^2" << endl;
    cout << "Keliling lingkaran = " << 2 * phi * jari_jari << "cm" << endl;

    return 0;
}