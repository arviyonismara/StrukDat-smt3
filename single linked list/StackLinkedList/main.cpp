#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *top, *bottom;
int batas = 5;

int count(){
    node *temp = bottom;
    int hitung = 0;
    while (temp != NULL){
        hitung+=1;
        temp = temp->next;
    }
    return hitung;
}

void CreateStack(node *temp, int x){
    bottom = new node();
    bottom->data = x;
    bottom->next = NULL;
    top = bottom;
}


void InsertBelakang(node *temp, int x){
    temp = new node();
    temp->data = x;
    temp->next = NULL;
    top->next = temp;
    top = temp;
}

void HapusBelakang(node *temp){
    node *hapus = top;
    temp = bottom;
    while (temp->next != top){
        temp = temp->next;

    }
    temp->next = NULL;
    top = temp;
    delete hapus;
}

void cetak(node *temp = bottom){
    while (temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    node temp;
    int angka;
    int option;
    do {
        cout<<"1. Insert Belakang"<<endl;
        cout<<"2. Hapus Belakang"<<endl;
        cout<<"3. Cetak"<<endl;
        cout<<"masukan pilihan opsi : ";cin>>option;
        if (option == 1){
            if (count() == batas){
                cout<<"data penuh"<<endl;
                main();
            }
            else{
                cout<<"inputkan angka : ";cin>>angka;
                if (bottom == NULL){
                    CreateStack(&temp, angka);
                }
                else{
                    InsertBelakang(&temp, angka);
                }
            }
        }
        if (option == 2){
            if (bottom == NULL){
                cout<<"data penuh"<<endl;
                main();
            }
            else if(count() == 1){
                node *hapus = bottom;
                bottom = NULL;
                delete hapus;
            }
            else{
                HapusBelakang(&temp);
            }
        }
        if (bottom == NULL){
            cout<<"stack masih kosong"<<endl;
            main();
        }
        else{
            cetak();
        }
    }while (option < 4);

}
//STACK : top, tambah belakang, pop(hapus belakang)
