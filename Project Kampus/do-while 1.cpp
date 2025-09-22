#include <iostream>
using namespace std;

int main() {
    //perulangan for kondisi dicek dahulu
    for (int i = 1;i < 1;i ++) {
        cout << "ini dari for loop" <<endl;
    }
    //perulangan do-while: kode dijalankan dulu
    int j = 0;
    do {
        cout <<"ini dari do while loop" << endl;
        while (j < 0); //kondisi salah,tapi kode ttp dijalankan sekali
    }
}