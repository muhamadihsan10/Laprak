#include <iostream>
using namespace std;
// Definisi struct untuk merepresentasikan data mahasiswa
struct Mahasiswa
{
    string nama;
    int umur;
};
// Definisi class untuk merepresentasikan sebuah mobil
class Mobil
{
private:
    string merek;
    int tahunProduksi;

public:
    // Konstruktor untuk membuat objek Mobil
    Mobil(string merek, int tahunProduksi)
    {
        this->merek = merek;
        this->tahunProduksi = tahunProduksi;
    }
    // Metode untuk menampilkan informasi mobil
    void tampilkanInfo()
    {
        cout << "Merek mobil: " << merek << endl;
        cout << "Tahun produksi: " << tahunProduksi << endl;
    }
};
int main()
{
    // Menggunakan struct Mahasiswa
    Mahasiswa mhs;
    mhs.nama = "YANTO";
    mhs.umur = 20;
    cout << "Nama mahasiswa: " << mhs.nama << endl;
    cout << "Umur mahasiswa: " << mhs.umur << endl;
    // Menggunakan class Mobil
    Mobil mobil("civic turbo", 2020);
    mobil.tampilkanInfo();
    return 0;
}