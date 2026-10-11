#include <iostream>
using namespace std;

int main() {
    int jamKerja, terlambat;

    cout << "========== Menghitung Gaji Kerja ==========" << endl;
    cout << "Masukkan Jam Kerja : ";
    cin >> jamKerja;
    cout << "Masukkan Terlambat (menit) : ";
    cin >> terlambat;

    
    ++jamKerja;                 
    if (terlambat > 0) {
        jamKerja--;            
    }

   
    terlambat *= 2000;                          
    int gaji = (jamKerja * 50000) - terlambat;

    
    string bonus = (jamKerja >= 8 && terlambat == 0) ? "DAPAT BONUS" : "TIDAK DAPAT BONUS";

    cout << endl;
    cout << "Total Gaji : Rp " << gaji << endl;
    cout << "Bonus      : " << bonus << endl;

    return 0;
}
