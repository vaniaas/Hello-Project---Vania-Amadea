#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

/*
    Name : Vania Amadea
    NIM : 1301204365
*/

#include<iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define NIL NULL

typedef char infotype; //berdasarkan digit akhir NIM 1301204365 mod 3 = 2
typedef struct elmtSingle *adrSingle;

struct elmtSingle{
    infotype info;
    adrSingle next;
};

struct listSingle{
    adrSingle first;
};

void create_list_1301204365(listSingle &L);
void alokasi_1301204365(infotype new_data, adrSingle &x);
void show_1301204365(listSingle L);

void insert_Last_1301204365(listSingle &L, adrSingle New);
void delete_first_1301204365(listSingle &L, adrSingle New);

int countX_1301204365(listSingle L, infotype x); //berdasarkan digit akhir NIM 1301204365 mod 3 = 2


#endif // SLL_H_INCLUDED
