#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node *Node, *head;

void BuatLinkedlist(node *temp, int x){
    node *tail;
    head = new node();
    head->data = x;
    head->next = NULL;
    tail = head;
}

void InsertDepan(node *temp, int x){
    temp = new node();
    temp->data = x;
    if(head == NULL){
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}

void InsertBelakang(node *temp, int x){
    node *tail;
    temp = new node();
    temp->data = x;
    if(head == NULL){
        head = temp;
    }
    else{
        temp->data = x;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }

}

void InsertIntermediate(node *temp, int x, int pos){
    node* cur;
    temp = new node();
    temp->data = x;

    cur = head;
    int nomor = 1;
    while (nomor < pos - 1){
        cur = cur->next;
        nomor++;
    }
    temp->next = cur->next;
    cur->next = temp;
}

void HapusDepan(node *hapus){
    if (head == NULL){
        cout<<"Linked List id empty, please creat new Linked List"<<endl;
    }
    else{
        hapus = new node();
        head = head->next;
        delete hapus;
    }

}

void HapusBelakang(node *temp){
    node *hapus, *tail;
    hapus = tail;
    temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    tail = temp;
    tail->next = NULL;
    delete hapus;
}

void DeleteIntermediate(node *temp, int pos){
    node *cur, *before, *hapus;
    int nomor = 1;
    while(nomor <= pos){
        if(nomor == pos -1){
            before = cur;
        }
        if(nomor == pos){
            hapus = cur;
        }
        cur = cur->next;
        nomor++;
    }
    before->next = cur;
    delete hapus;
}

void cetak(){
    node *cur;
    cur = head;
    while (cur != NULL){
        cout << "["<<cur->data<<"]";
        if (cur->next == NULL){
            break;
        }
        cout << " -> ";
        cur = cur->next;
    }

}


int main(){
    node *temp;
    int option, data, posisi;
    do{
        cout << "Pilih Opsi "<<endl;
        cout << "1. Input Data "<<endl;
        cout << "2. Hapus data: "<<endl;
        cin >> option;
        if (option == 1){
            cout << "Input Posisi: ";
            cin >> posisi;
            if(posisi == 1){
                cout << "Input Data: ";
                cin >> data;
                InsertDepan(temp, data);
            }
            else{
                cout << "Input Data: ";
                cin >> data;
                InsertIntermediate(temp, data, posisi);
            }
        }
        if (option == 2){
            cout << "Input Posisi: ";
            cin >> posisi;
            if(posisi == 1){
                HapusDepan(temp);
            }
            else{
                DeleteIntermediate(temp, posisi);
            }
        }
        cetak();
    }while(option != 3);
    return 0;
}
