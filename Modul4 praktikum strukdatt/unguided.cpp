#include <iostream>
using namespace std;
/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    string nama;
    string nim;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(string nama, string nim)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}
// Tambah Belakang
void insertBelakang(string nama, string nim)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}
// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
void insertTengah(string nama, string nim, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->nama = nama;
        baru->nim = nim;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;

            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *bantu, *hapus, *sebelum;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                sebelum = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(string nama, string nim)
{
    if (isEmpty() == 0)
    {
        head->nama = nama;
        head->nim = nim;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(string nama, string nim, int posisi)
{
    Node *bantu;
    if (isEmpty() == 0)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->nama = nama;
            bantu->nim = nim;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Belakang
void ubahBelakang(string nama, string nim)
{
    if (isEmpty() == 0)
    {
        tail->nama = nama;
        tail->nim = nim;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (!isEmpty())
    {
        cout << endl << endl;
        cout << "\t\t     Output Data" <<endl;
        cout << "\t\t_________________" << endl << endl;
        cout << " Nama\t\t|  Nim\t\t|" << endl;
        while (bantu != NULL)
        {
            cout <<  bantu->nama <<"\t\t|"<<  bantu->nim <<"\t" << endl;
            bantu = bantu->next;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
        return;
    }
}
int main()
{

    string nama;
    string nim;
    int pilihan;
    int posisi;

    do
    {
        cout << endl;
        cout << "\t\tData Mahasiswa" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "12. Exit" << endl;
        cout << "input (1-12): ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
        {
            cout << "--------OUTPUT DATA-------\n\n";
            cout << "Masukkan   Nama :"; 
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan   Nim : ";
            cin >> nim;
            insertDepan(nama, nim);
            cout << "Data " << nama << " berhasil diinput!";

            break;
        }
        case 2:
        {
            cout << "manu  belakang\n\n";
                cout << "Masukkan Nama :";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Nim: ";
                cin >> nim;
                insertBelakang(nama, nim);
                cout << "Data " << nama << " berhasil diinput!";
            break;
        }
        case 3:
        {

            cout << "manu  tengah\n\n";          
            cout << "Masukkan Nama :";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Nim: ";
            cin >> nim;
            cout << "Masukan Posisi: ";
            cin >> posisi;
            insertTengah(nama, nim, posisi);
            cout << "Data " << nama << " Berhasil diinput!" << endl;
            break;
        }
        case 4:
        {
            cout << "manu ubah depan\n\n";
            cout << "Masukkan Nama :";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Nim: ";
            cin >> nim;
            ubahDepan(nama, nim);
            cout << "data depan berhasil diubah";
            break;
        }
        case 5:
        {
            cout << "manu ubah belakang\n\n";
            cout << "Masukkan Nama :";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Nim: ";
            cin >> nim;
            ubahBelakang(nama, nim);
            cout << "data belakang berhasil diubah";
            break;
        }
        case 6:
        {
            cout << "manu ubah tengah\n\n";
            cout << "Masukkan Nama :";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Nim: ";
            cin >> nim;
            cout << "Masukkan Posisi: ";
            cin >> posisi;
            ubahTengah(nama, nim, posisi);
            cout << "data tengah berhasil diubah";
            break;
        }

        case 7:
        {
            cout << "manu hapus depan\n\n";
            hapusDepan();
            cout << "Data Depan berhasil terhapus!";
            break;
        }
        case 8:
        {
            cout << "manu hapus belakang\n\n";
            hapusBelakang();
            cout << "Data Belakang berhasil terhapus!";
            break;
        }
        case 9:
        {
            cout << "manu hapus tengah\n\n";
            cout << "Masukkan Posisi: ";
            cin >> posisi;
            hapusTengah(posisi);
            cout << "Data Tengah berhasil terhapus!";
            break;
        }
        case 10:
        {

            clearList();
            break;
        }

        case 11:
        {
            tampil();
            break;
        }
        case 12:
        {
            cout << "Terima Kasih!" << endl;
        }

        default:
        {
            cout << "Pilihan tidak Valid!" << endl;
            break;
        }
        }
    } while (pilihan != 12);

    return 0;
}