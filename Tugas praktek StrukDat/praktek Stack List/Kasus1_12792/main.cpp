#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *top, *bottom;
int batas = 5;

int NumberOfElement(){
    node *temp = bottom;
    int hitung = 0;
    while (temp != NULL){
        hitung+=1;
        temp = temp->next;
    }
    return hitung;
}

void Alokasi(node *temp, int x){
    bottom = new node();
    bottom->data = x;
    bottom->next = NULL;
    top = bottom;
}

bool IsFull(){
    if (NumberOfElement() == batas){
        return true;
    }
    else{
        return false;
    }
}

bool IsEmpty(){
    if (top == NULL){
        return true;
    }
    else{
        return false;
    }
}

void push(node *temp, int x){
    temp = Alokasi();
    if (IsFull()){
        cout<<"stack penuh"<<endl;
    }
    else{
        if(IsEmpty()){
            top = temp;
        }
        else{
            top->next = temp;
            top = temp;
        }
    }
    /*
    temp = new node();
    temp->data = x;
    temp->next = NULL;
    top->next = temp;
    top = temp;*/
}

void pop(node *temp){
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
            if (IsFull()){
                cout<<"data penuh"<<endl;
                main();
            }
            else{
                cout<<"inputkan angka : ";cin>>angka;
                if (IsEmpty()){
                    Alokasi(&temp, angka);
                }
                else{
                    push(&temp, angka);
                }
            }
        }
        if (option == 2){
            if (IsEmpty()){
                cout<<"data penuh"<<endl;
                main();
            }
            else if(NumberOfElement() == 1){
                node *hapus = bottom;
                bottom = NULL;
                delete hapus;
            }
            else{
                pop(&temp);
            }
        }
        if (IsEmpty()){
            cout<<"stack masih kosong"<<endl;
            main();
        }
        else{
            cetak();
        }
    }while (option < 4);

}

