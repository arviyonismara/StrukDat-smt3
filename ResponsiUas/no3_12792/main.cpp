#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
};

Node *head, *tail;

void InsertDepan(Node *temp, int data){
    temp = new Node;
    temp->data = data;
    temp->next = NULL;
    temp->next = NULL;
    if (head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}



void intermediate(Node *temp, int InData, int position){
    Node *cur = head;
    temp = new Node;
    if (position == head->data){
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        temp = head;
    }
    else if (position == tail->data){
        temp->data = InData;
        tail->next = temp;
        temp->next = NULL;
        temp->prev = tail;
        temp = tail;
    }
    else{
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

void cetak(){
    Node *cur = head;
    while (cur != NULL){
        cout << cur->data;
        if (cur->next == NULL)
        {
            break;
        }
        cout << " -> ";
        cur = cur->next;
    }
}

int main(){
    Node *temp;
    InsertDepan(temp, 80);
    InsertDepan(temp, 40);
    InsertDepan(temp, 70);
    InsertDepan(temp, 50);
    intermediate(temp, 60, 3);
    //delIntermediate(80);
    // intermediate(temp, 100, 80);
    cetak();
}
