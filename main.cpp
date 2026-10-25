#include "Doublylist.h"

int main() {
    List L;
    CreateList(L);
    infotype x;
    address P;

    cout << "masukkan nomor polisi: ";
    cin >> x.nopol;
    cout << "masukkan warna kendaraan: ";
    cin >> x.warna;
    cout << "masukkan tahun kendaraan: ";
    cin >> x.thnBuat;
    
    P = alokasi(x);
    insertLast(L, P);
    cout << endl;

    cout << "masukkan nomor polisi: ";
    cin >> x.nopol;
    cout << "masukkan warna kendaraan: ";
    cin >> x.warna;
    cout << "masukkan tahun kendaraan: ";
    cin >> x.thnBuat;
    
    P = alokasi(x);
    insertLast(L, P);
    cout << endl;

    cout << "masukkan nomor polisi: ";
    cin >> x.nopol;
    cout << "masukkan warna kendaraan: ";
    cin >> x.warna;
    cout << "masukkan tahun kendaraan: ";
    cin >> x.thnBuat;
    
    if (findElm(L, x) != NULL) {
        cout << "nomor polisi sudah terdaftar" << endl;
        dealokasi(P);
    } else {
        P = alokasi(x);
        insertLast(L, P);
    }
    cout << endl;

    cout << "masukkan nomor polisi: ";
    cin >> x.nopol;
    cout << "masukkan warna kendaraan: ";
    cin >> x.warna;
    cout << "masukkan tahun kendaraan: ";
    cin >> x.thnBuat;
    
    P = alokasi(x);
    insertLast(L, P);
    cout << endl;

    cout << "DATA LIST 1" << endl;
    printInfo(L);
    cout << endl;

    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> x.nopol;
    address found = findElm(L, x);
    if (found != NULL) {
        cout << "Nomor Polisi : " << found->info.nopol << endl;
        cout << "Warna        : " << found->info.warna << endl;
        cout << "Tahun        : " << found->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    cout << endl;

    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> x.nopol;
    address target = findElm(L, x);
    if (target != NULL) {
        if (target == L.First) {
            deleteFirst(L, P);
        } else if (target == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(target->prev, P);
        }
        dealokasi(P);
        cout << "Data dengan nomor polisi " << x.nopol << " berhasil dihapus." << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    cout << endl;

    cout << "DATA LIST 1" << endl;
    printInfo(L);

    return 0;
}