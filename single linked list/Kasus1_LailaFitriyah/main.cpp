#include <iostream>
using namespace std;

struct Node {

    int data;
    Node *next;
};

struct LinkedList {
    Node *head;
    int dataCount;

};

void create(LinkedList *list, int value) {
    Node *node;
    node = new Node();
    node->data = value;

    if (list->head == nullptr) {

        list->head = node;

    }
    list->dataCount++;
}

void AddAtBegin(LinkedList *list, int value){
    Node *node;
    node = (Node*)new(Node);

    if(list->head == nullptr)
        printf("List is empty, please create new list");

    else{
        node->data = value;
        node->next = list->head;
        list->head = node;
    }
    list->dataCount++;
}


void firstElement(LinkedList *list){
    cout << "First Element : " << list->head->data << endl;
}

void LastElement(LinkedList *list){
    Node *Temp;
    Temp = list->head;
    while(Temp->next != nullptr){
        Temp = Temp->next;
    }
    cout << "Last Element : " << Temp->data << endl;
}

void display(LinkedList *list) {

    Node *node;

    node = list->head;

    cout << "size: " << list->dataCount << endl;

    if (list->dataCount > 0) {
        while (node->next != nullptr) {

            cout << node->data << " -> ";

            node = node->next;
        }
        cout << node->data << " -> " ;
    }
    cout << "NULL" << endl ;

}

int main () {
    LinkedList* list;
    list = new LinkedList(); // create
    create(list, 23);
    // create(list, 24);
    AddAtBegin(list, 4);
    firstElement(list);
    LastElement(list);
    cout << endl;
    display(list);
    return 0;
}
