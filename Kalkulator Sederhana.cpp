#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int pilihan;
    float bilangan_pertama, bilangan_kedua, hasil;
    string operasi, garis(40, '-');

    cout << "PILIHAN OPERASI HITUNG" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Pangkat" << endl;
    cout << "6. Modulus" << endl;
    cout << "7. Pembagian Bulat" << endl;

    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    cout << "Masukkan Bilangan Pertama: ";
    cin >> bilangan_pertama;
    cout << "Masukkan Bilangan Kedua: ";
    cin >> bilangan_kedua;

    switch (pilihan){
    case 1:
        hasil = bilangan_pertama + bilangan_kedua;
        operasi = "+";
        break;
    
    case 2:
        hasil = bilangan_pertama - bilangan_kedua;
        operasi = "-";
        break;
    
    case 3:
        hasil = bilangan_pertama * bilangan_kedua;
        operasi = "x";
        break;
    
    case 4:
        hasil = bilangan_pertama / bilangan_kedua;
        operasi = "÷";
        break;
    
    case 5:
        hasil = pow(bilangan_pertama, bilangan_kedua);
        operasi = "^";
        break;
    
    case 6:
        hasil = (int)bilangan_pertama % (int)bilangan_kedua;
        operasi = "%";
        break;
    
    case 7:
        hasil = (int)bilangan_pertama/(int)bilangan_kedua;
        operasi = "//";
        break;
        
    default:
        cout << "Operasi Hitung Tidak Valid!" << endl;
        return 1;
    }
    
    cout << garis << endl;
    cout << "Hasil dari " << bilangan_pertama << " " << operasi << " " << bilangan_kedua << " adalah " << hasil << endl;
    cout << garis;
    
    return 0;
}