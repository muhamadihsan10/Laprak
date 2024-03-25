#include <stdio.h>
// definisi struktur mahasiswa
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};
int main()
{
    // deklarasi
    struct Mahasiswa mhs1, mhs2;
    // input val to struct mhs1
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    // input val to struct mhs2
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;
    // mencetak isi struct mhs1
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    // mencetak isi struct mhs2
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}