#include <iostream>

using namespace std;

int main()
{
    int a,t;
    float luas;

    cout << "PROGRAM HITUNG LUAS SEGITIGA \n";
    cout << "Masukkan panjang alas: ";
    cin >> a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> t;

    luas = 0.5*a*t;
    cout << "Luas segitiga adalah " << luas << endl;

    return 0;
}
