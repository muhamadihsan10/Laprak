#include <iostream>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* back;
    int size;

public:
    Queue() {
        front = nullptr;
        back = nullptr;
        size = 0;
    }
 
    bool isFull() {
        return false; 
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueueAntrian(string nama, string nim) {
        Node* newNode = new Node();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
        size++;
    }

    void dequeueAntrian() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
            size--;
        }
    }

    int countQueue() {
        return size;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeueAntrian();
        }
    }

    void viewQueue() {
        cout << "Data antrian mahasiswa:" << endl;
        Node* current = front;
        int position = 1;
        while (current != nullptr) {
            cout << position << ". " << current->nama << " (" << current->nim << ")" << endl;
            current = current->next;
            position++;
        }
    }
};
int main() {
    Queue antrian;
    int pilihan;
    string nama, nim;

    do {
        cout << "Menu Antrian Mahasiswa:" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Hapus Antrian" << endl;
        cout << "3. Lihat Antrian" << endl;
        cout << "4. Jumlah Antrian" << endl;
        cout << "5. Hapus Semua Antrian" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan Nama: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan NIM: ";
            getline(cin, nim);
            antrian.enqueueAntrian(nama, nim);
            break;
        case 2:
            antrian.dequeueAntrian();
            break;
        case 3:
            antrian.viewQueue();
            break;
        case 4:
            cout << "Jumlah antrian = " << antrian.countQueue() << endl;
            break;
        case 5:
            antrian.clearQueue();
            break;
        case 0:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    return 0;
}