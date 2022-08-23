#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} * head, *tail;

int cekData(int x){
    node *cur = head;
    int a = 0;
    while (cur != NULL)
    {
        if (cur->data == x)
        {
            a = 1;
            return 1;
            break;
        }
        cur = cur->next;
    }
    if (a == 0)
    {
        return 0;
    }
    return 0;
}

void addFirst(node *temp, int x){

    temp = new node;
    temp->data = x;
    temp->next = NULL;
    if (head == NULL){
        head = temp;
        tail = head;
    }
    else{
        temp->next = head;
        head = temp;
    }
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

int main()
{
    node *temp;
    int option, data;
    do{
        cout<< "input data : ";
        cin >> data;
        cout<<endl;
        if (cekData(data)){
        cout << "Data " << data << " sudah ada di list" << endl;
        }
        else{
            addFirst(temp, data);
        }
        cetak();
    }while(option != 3);
    return 0;
}
