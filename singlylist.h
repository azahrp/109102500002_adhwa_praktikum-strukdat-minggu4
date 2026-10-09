#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>
using namespace std;

#define Nil NULL

// Type infotype : int
typedef int infotype;

// Type address : pointer to ElmList
typedef struct ElmList *address;

// Type ElmList < info : infotype, next : address >
struct ElmList {
    infotype info;
    address next;
};

// Type List < First : address >
struct List {
    address First;
};

// Prosedur dan fungsi
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif // SINGLYLIST_H_INCLUDED