#include <iostream>
using namespace std;

int main() {
    
    int angka, hasilperkalian = 1;
    do {
        cout << "masukkan angka :" << endl;
        cin >> angka;
        hasilperkalian *= angka;
    }   while (angka != 1);
    cout << "hasil perkalian adalah: " << hasilperkalian;
    return 0;
}