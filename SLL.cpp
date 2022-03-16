#include"SLL.h"
/*
    Name : Vania Amadea
    NIM : 1301204365
*/

void create_list_1301204365(listSingle &L){
    first(L)=NIL;
}
void alokasi_1301204365(infotype new_data, adrSingle &x){
    x = new elmtSingle;
    info(x) = new_data;
    next(x) = NIL;
}
void show_1301204365(listSingle L){
    adrSingle P;
    P = first(L);
    if (first(L) == NIL){
        cout<<"List kosong!"<<endl;
    }else{
        while (P != NIL){
        cout<<info(P)<<" ";
        P = next(P);
        }
    }
}

void insert_Last_1301204365(listSingle &L, adrSingle New){
    if (first(L)==NIL){
        first(L)=New;
    } else {
        adrSingle Q = first(L);
        while (next(Q) != NIL) {
            Q = next(Q);
        }
        next(Q) = New;
    }
}
void delete_first_1301204365(listSingle &L, adrSingle New){
    New = first(L);
    if (next(first(L)) == NIL) {
        first(L) = NIL;
    } else {
        first(L) = next(first(L));
    }
    next(New) = NIL;
}

int countX_1301204365(listSingle L, infotype x){
    adrSingle Q = first(L);
    int hitung = 0;
    while (Q != NIL) {
        if (x == info(Q)) {
            hitung++;
        }
        Q = next(Q);
    }
    return hitung;
}
