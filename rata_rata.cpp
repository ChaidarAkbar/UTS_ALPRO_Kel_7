#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int nilai_ujian1, nilai_ujian2, nilai_ujian3, total;
    double rata_rata;
    
    cout << "Menghitung rata rata Nilai Ujian " << endl;

    cout << "Masukkan nilai_ujian pertama : ";
    cin >> nilai_ujian1;

    cout << "Masukkan nilai_ujian kedua : ";
    cin >> nilai_ujian2;

    cout << "Masukkan nilai_ujian ketiga : ";
    cin >> nilai_ujian3;

    total = nilai_ujian1 + nilai_ujian2 + nilai_ujian3;
    rata_rata = total / 3.0; 

    cout << "Total Nilai : " << total << endl;
    cout << "Rata-Rata Nilai Ujian: " << fixed << setprecision(2) << rata_rata << endl;

    return 0;
}