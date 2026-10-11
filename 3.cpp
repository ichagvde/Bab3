#include <iostream>
using namespace std;
 
int main() {
    float jari, tinggi, volume;
    const float PI = 3.14159;
 
    cout << "=== Program Menghitung Volume Tabung ==="
         << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> jari;
    cout << "Masukkan tinggi tabung    : ";
    cin >> tinggi;
 
    volume = PI * jari * jari * tinggi;
 
    cout << "Volume Tabung adalah: " << volume << endl;
 
    return 0;
}