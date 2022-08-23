#include <iostream>

using namespace std;

struct node{
    //deklarasi komponen yang dibutuhkan
    int angka;

    node *next;
};

node *head, *tail, *cur;

void createlinkedlist(int angka){
    head = new node();
    head->angka = angka;
    head->next = NULL;
    tail = head;
}

void showlinkedlist(){
    cur = head;
    while (cur != NULL){
        cout<<"["<<cur->angka<<"]";

        cur = cur->next;
    }
}
int main()
{
    createlinkedlist(1);
    showlinkedlist();
    cout<<"->";

    createlinkedlist(2);
    showlinkedlist();
    cout<<"->";

    createlinkedlist(3);
    showlinkedlist();
    cout<<"->";

    createlinkedlist(4);
    showlinkedlist();
    cout<<"->";

}
