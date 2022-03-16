#include"SLL.h"
/*
    Name : Vania Amadea
    NIM : 1301204365
*/
#include <iostream>
using namespace std;

int main()
{
    listSingle L;
    adrSingle P;
    char X;

    create_list_1301204365(L);

    for (int i = 0; i < 10; i++){
        cout << "Masukkan Data : ";
        cin >> X;
        alokasi_1301204365(X,P);
        insert_Last_1301204365(L,P);
    }

    show_1301204365(L);
    cout<<endl;
    cout<<"Karakter yang ingin dicari : ";
    char cari;
    cin>>cari;
    cout<<endl;
    cout<<"Jumlah karakter : "<< countX_1301204365(L,cari)<<endl;

    cout<<endl;
    cout<<"Melakukan proses delete 5 data terdepan"; //berdasarkan digit akhir NIM 1301204365
    for (int i = 0; i < 5; i++){
        delete_first_1301204365(L,P);
    }
    cout<<endl;
    cout<<"Proses delete selesai : ";
    show_1301204365(L);
    return 0;
}
