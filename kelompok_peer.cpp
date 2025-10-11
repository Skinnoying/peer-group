#include <iostream>
using namespace std;


int hitungTarif(int jenis, int jam) {
    int tarifPerJam;

    if (jenis == 1) {            
        tarifPerJam = 2000;
    } else if (jenis == 2) {     
        tarifPerJam = 5000;
    } else {
        cout << "Jenis kendaraan tidak dikenal!" << endl;
        return 0;
    }

    return tarifPerJam * jam;
}

int main() {

    cout << "===================================" << endl;
    cout << "          SELAMAT DATANG DI        " << endl;
    cout << "   PROGRAM PERHITUNGAN BIAYA PARKIR" << endl;
    cout << "===================================" << endl << endl  << endl;

    int n;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> n;

    int total = 0;

    
    for (int i = 1; i <= n; i++) {
        int jenis, jam;

        cout << "\nKendaraan ke-" << i << endl;
        cout << "Jenis kendaraan (1. Motor / 2. Mobil): ";
        cin >> jenis;
        cout << "Lama parkir (jam): ";
        cin >> jam;

        int biaya = hitungTarif(jenis, jam);

        
        if (jam > 24 && jenis == 1) {
            biaya = 40000;
            cout << "Biaya parkir (lebih dari 24 jam): Rp. " << biaya << endl;
        } else if (jam > 24 && jenis == 2) {
            biaya = 100000;
            cout << "Biaya parkir (lebih dari 24 jam): Rp. " << biaya << endl;
        } else {
            cout << "Biaya parkir: Rp. " << biaya << endl;
        }

        total += biaya;
    }

    cout << "Total semua biaya parkir: Rp. " << total << endl;

    return 0;
}
