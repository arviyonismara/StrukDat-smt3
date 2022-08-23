#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node *head;

void BuatDoubleLinkedList(node *temp, int x){
    node *tail;
    head = new node();
    head->data = x;
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

void InsertDepan(node*temp, int x){
    temp = new node();
    temp->data = x;
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertBelakang(node *temp, int x){
    node *tail;
    temp = new node();
    temp->data = x;
    temp->prev = tail;
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
}

void intermediate(Node *temp, int InData, int position)
{
    Node *cur = head;
    temp = new Node;
    if (position == head->data)
    {
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        temp = head;
    }
    else if (position == tail->data)
    {
        temp->data = InData;
        tail->next = temp;
        temp->next = NULL;
        temp->prev = tail;
        temp = tail;
    }
    else
    {
        temp->data = InData;
        while (cur->data != position)
        {
            cur = cur->next;
        }
        temp->next = cur->next;
        cur->next->prev = temp;
        temp->prev = cur;
        cur->next = temp;
    }
}

void HapusDepan(){
    node *hapus;
    if (head == NULL){
        "Linked list masih kosong";
    }
    else{
        hapus = head;
        head = head->next;
        head->prev = NULL;
        delete hapus;
    }
}

void HapusBelakang(){
    node *hapus, *tail;
    if (head == NULL){
        "Linked list masih kosong";
    }
    else{
        hapus = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete hapus;
    }
}

void cetak(){
    node *cur;
    cur = head;
    if (head == NULL){
        cout<<"Linked List masih kosong, buat baru terlebih dahulu"<<endl;
    }
    else{
        while(cur != NULL){
            cout<<"["<<cur->data<<"]";
            if(cur->next == NULL){
                break;
            }
            cur = cur->next;
            cout<<"->";
        }
    }
}
int main()
{
    node temp;
    BuatDoubleLinkedList(&temp, 5);
    InsertDepan(&temp, 4);
    InsertBelakang(&temp, 6);
    InsertBelakang(&temp, 7);
    InsertDepan(&temp, 3);
    cetak();
    cout<<"\n";
    //HapusDepan();
    //cetak();
    //cout<<"\n";
    HapusBelakang();
    cetak();
}
