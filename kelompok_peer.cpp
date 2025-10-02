#include <iostream>
using namespace std;

// Function untuk menghitung tarif parkir
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
    int n;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> n;

    int total = 0;

    // Menggunakan for loop untuk input beberapa kendaraan
    for (int i = 1; i <= n; i++) {
        int jenis;
        int jam;

        cout << "\nKendaraan ke-" << i << endl;
        cout << "Jenis kendaraan (1. motor/2. mobil): ";
        cin >> jenis;
        cout << "Lama parkir (jam): ";
        cin >> jam;

        int biaya = hitungTarif(jenis, jam);
        
         if(jam > 24 && jenis == 1) {
        cout << "Total biaya : RP. 40000" << endl;
   		} else if (jam > 24 && jenis == 2){
    	cout << "Total biaya : Rp. 100000" << endl;
    	} else {
    		cout << "Biaya parkir: Rp. " << biaya << endl;
		}
        
        total += biaya;
    }

    cout << "\nTotal semua biaya parkir: Rp. " << total << endl;

    return 0;
}
