#include <iostream>
using namespace std;
// Fungsi untuk menghitung luas persegi panjang
float hitungLuasPersegiPanjang(float panjang, float lebar)
{
    return panjang * lebar;
}
// Fungsi untuk menampilkan hasil perhitungan luas persegi panjang
void tampilkanLuasPersegiPanjang(float panjang, float lebar)
{
    float luas = hitungLuasPersegiPanjang(panjang, lebar);
    cout << "Luas persegi panjang dengan panjang " << panjang << " lebar " << lebar << " adalah " << luas << endl;
}
int main()
{
    float panjang, lebar;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    tampilkanLuasPersegiPanjang(panjang, lebar);
    return 0;
}