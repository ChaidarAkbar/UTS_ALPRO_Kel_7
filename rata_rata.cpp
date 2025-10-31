#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double bilangan1, bilangan2, bilangan3;
    double total;
    double rata_rata;
    
    cout << "Menghitung rata rata" << endl;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    cout << "Masukkan bilangan ketiga: ";
    cin >> bilangan3;

    total = bilangan1 + bilangan2 + bilangan3;
    rata_rata = total / 3.0; 

    cout << "Total Penjumlahan: " << total << endl;
    cout << "Rata-Rata: " << fixed << setprecision(2) << rata_rata << endl;

    return 0;
}