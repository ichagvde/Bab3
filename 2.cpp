#include <iostream>
using namespace std;
 
int main() {
    float celcius, fahrenheit, reamur, kelvin;
 
    cout << "\tPROGRAM KONVERSI SUHU" << endl << endl;
    cout << "Masukan Suhu(Celcius) = ";
    cin >> celcius;
 
    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = (fahrenheit - 32) * 4 / 9;
    kelvin = (reamur * 5 / 4) + 273.15;
 
    cout << "Jadi,\t\t" << celcius
         << " derajat celcius\t\t= " << fahrenheit
         << " derajat fahrenheit" << endl;
    cout << "\t\t" << fahrenheit
         << " derajat fahrenheit\t= " << reamur
         << " derajat reamur" << endl;
    cout << "\t\t" << reamur
         << " derajat reamur\t\t= " << kelvin
         << " derajat kelvin" << endl;
 
    return 0;
}