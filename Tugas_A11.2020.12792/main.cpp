#include <iostream>

using namespace std;

//pemrograman simple menggunakan single linked list
//single linked list PBO menggunakan fungsi
struct toko{
    //deklarasi komponen yang dibutuhkan
    string produk, merk;
    int tanggal;

    toko *next;
};

toko *head, *tail, *cur, *newnode, *del; //curr adalah current letak node

//creat single linked list
void buatSingleLinkedList(string produk,string merk,int tb){//tb adalah tahun terbit
    head = new toko();
    head->produk = produk;
    head->merk = merk;
    head->tanggal = tb;
    head->next = NULL;
    tail = head;
}

//menambah awal single linked list
void addfirst(string produk,string merk,int tb){
    newnode = new toko();
    newnode->produk = produk;
    newnode->merk = merk;
    newnode->tanggal = tb;
    newnode->next = head;
    head = newnode;
}

void addlast(string produk,string merk,int tb){
    newnode = new toko();
    newnode->produk = produk;
    newnode->merk = merk;
    newnode->tanggal = tb;
    newnode->next = NULL;
    tail->next = newnode;
    tail = newnode;
}

void removefirst(){
    del = new toko();
    head = head->next;
    delete del;
}

void removelast(){
    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

void changefirst(string produk,string merk,int tb){
    head->produk = produk;
    head->merk = merk;
    head->tanggal = tb;
}

void changelast(string produk,string merk,int tb){
    tail->produk = produk;
    tail->merk = merk;
    tail->tanggal = tb;
}

//print single linked list
void cetakSingleLinkedList(){
    cur = head;
    while (cur != NULL){
        cout<<"produk      : "<<cur->produk<<endl;
        cout<<"merk        : "<<cur->merk<<endl;
        cout<<"tahun terbit: "<<cur->tanggal<<endl;

        cur = cur->next;
    }
}

int main()
{
    buatSingleLinkedList("minuman","cocacola", 2019);
    cetakSingleLinkedList();
    cout << "\n" <<endl;

    addfirst("makanan", "citato", 2020);
    cetakSingleLinkedList();
    cout << "\n" <<endl;

    addlast("makanan", "lays", 2021);
    cetakSingleLinkedList();
    cout << "\n" <<endl;

    removefirst();
    cetakSingleLinkedList();
    cout << "\n" <<endl;

    removelast();
    cetakSingleLinkedList();
    cout << "\n" <<endl;

    changefirst("minuman", "milo", 2018);
    cetakSingleLinkedList();
    cout << "\n" <<endl;

    changelast("minuman", "yakult", 2020);
    cetakSingleLinkedList();
    cout << "\n" <<endl;

}
