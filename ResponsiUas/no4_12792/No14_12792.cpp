#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node *head, *tail;

int maxx = 5;

int countLinkedList(){
    node *cur;
    if(head == NULL){
        return 0;
    }
    else{
        int angka = 0;
        cur = head;
        while(cur != NULL){
            cur = cur->next;
            angka++;
        }
        return angka;
    }
}

bool isFull(){
    if (countLinkedList()== maxx){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(){
    if(countLinkedList() == 0){
        return true;
    }
    else{
        return false;
    }
}

void Enqueue(node *temp, int x){
    node *tail;
    if(isFull()){
        cout<<"antrian penuh"<<endl;
    }
    else{
        if(isEmpty()){
            head = new node();
            head->data = x;
            head->next = NULL;
            tail = head;
        }
        else{
            temp = new node();
            temp->data = x;
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
    }
}

void Dequeue(){
    node *hapus;
    if(isEmpty()){
        cout<<"Antrian kosong"<<endl;
    }
    else{
        hapus = head;
        head = head->next;
        hapus->next = NULL;
        delete hapus;
    }
}

void Destroy(){
    node *hapus, *cur;
    if(isEmpty()){
        cout<<"Antrian kosong"<<endl;
    }
    else{
        cur = head;
        while(cur != NULL){
            hapus = cur;
            cur = cur->next;
            hapus->next = NULL;
            delete hapus;
        }
        head = NULL;
        tail = NULL;
    }
}

void Cetak(){
    node *cur;
    if(isEmpty()){
        cout<<"antrian kosong"<<endl;
    }
    else{
        cur = head;
        int nomor = 1;
        while(nomor <= maxx){
            if(cur != NULL){
                cout<<nomor<<"."<<cur->data<<endl;
                cur = cur->next;
            }
            else{
                cout<<nomor<<"."<<"(kosong)"<<endl;
            }
            nomor++;
        }
    }
}

int main()
{
    node *temp;
    int option, data, posisi;
    do{
        cout << "Pilih Opsi "<<endl;
        cout << "1. Input Data "<<endl;
        cout << "2. Panggil Antrian "<<endl;
        cout << "3. Tampilkan Antrian"<<endl;
        cin >> option;
        if (option == 1){
            cout << "Input Data: ";
            cin >> data;
            Enqueue(temp, data);
        }
        else if (option == 2){
            Dequeue();
        }
        else if (option == 3){
            Cetak();
        }

    }while(option != 3);
    return 0;
}


