#include <iostream>

using namespace std;

struct node{
    //deklarasi komponen yang dibutuhkan
    int data;
    node *next;
};

node *head, *temp, *newNode;

void NewLinkedList(int data){
    head = new node();
    head->data = data;
    head->next = NULL;
}

void InsertDepan(int data){

    if(head == NULL){
        cout<<"Linked List is empty, please creat new Linked List"<<endl;
    }
    else{
        newNode = new node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
}

void CetakDepan(){
    cout<<"["<<head->data<<"]"<<endl;
}

void Cetak(){
    temp = head;
    while (temp != NULL){
        cout<<"["<<temp->data<<"]";
        temp = temp->next;
    }
}

int main(){

    NewLinkedList(1);
    Cetak();
    cout<<"->";
    NewLinkedList(2);
    Cetak();
    cout<<"->";
    NewLinkedList(3);
    Cetak();
    cout<<"->"<<"\n"<<endl;

    CetakDepan();
    cout<<"\n";

    InsertDepan(5);
    Cetak();
    cout<<"->";
}
