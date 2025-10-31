#include <iostream>
using namespace std;

int main() {
    int nomor_tiket;
    cout << "Nomor Tiket Anda : ";
    cin >> nomor_tiket;

    if (nomor_tiket % 2 == 0) {
        cout << nomor_tiket << "Harap menuju Pintu Masuk A (Genap)" << endl;
    } else {
        cout << nomor_tiket << "Harap menuju Pintu Masuk B (Ganjil)" << endl;
    }

    return 0;
}