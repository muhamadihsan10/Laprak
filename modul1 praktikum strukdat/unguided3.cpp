#include <iostream>
#include <map>
using namespace std;
int main()
{
    // Membuat objek map dengan key bertipe string dan value bertipe int
    map<string, int> umur;
    // Menambahkan elemen ke dalam map
    umur["Agus"] = 19;
    umur["yanto"] = 18;
    umur["chery"] = 20;
    // Mengakses nilai dari map menggunakan key
    cout << "Umur Agus: " << umur["Agus"] << endl;
    cout << "Umur yanto: " << umur["yanto"] << endl;
    cout << "Umur chery: " << umur["chery"] << endl;
    return 0;
}
