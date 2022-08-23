#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
};
node *Node, *head;

void InsertDepan (node *temp, int x){
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
    tail = head;
    temp = new node();
    temp->data = x;
    if(head == NULL){
        head = temp;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        tail->next = temp;
        tail = temp;
    }
}

void HapusDepan(node *temp){
    node *hapus;
    if(head->next == NULL){
        hapus = head;
        head = NULL;
        delete hapus;
    }
}

void HapusBelakang(node *temp){
    node *hapus;
    node *tail;
    tail = head;
    while(temp->next != NULL){
            temp = temp->next;
        }
        tail->next = temp;
        tail = temp;
        hapus = tail;
        tail = NULL;
        delete hapus;

}

void Cetak(){
    node *temp;
    temp = head;
    while (temp != NULL){
        cout << "["<<temp->data<<"]";
        if (temp->next == NULL){
            break;
        }
        cout<<"->";
        temp = temp->next;
    }
}

int main(){
    node temp;
    InsertDepan(&temp, 5);
    InsertBelakang(&temp, 7);
    //InsertDepan(&temp, 6);
    //InsertBelakang(&temp, 7);
    //InsertBelakang(&temp, 8);
    //HapusDepan(&temp);
    //HapusBelakang(&temp);
    Cetak();

}
