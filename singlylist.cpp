#include "Singlylist.h"

// Membuat list kosong
void createList(List &L) {
    L.First = Nil;
}

// Mengalokasikan elemen baru dengan info x
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

// Menghapus elemen dari memori
void dealokasi(address &P) {
    delete P;
    P = Nil;
}

// Menampilkan seluruh info elemen pada list
void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Menyisipkan elemen P di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}