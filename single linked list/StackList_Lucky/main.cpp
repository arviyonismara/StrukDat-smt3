#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} * TOP;

int maxx = 5;

int NumberOfElement()
{
    Node *cur = TOP;
    int number = 0;
    while (cur != NULL)
    {
        number += 1;
        cur = cur->next;
    }
    return number;
}

Node *allocate(Node *S, int data)
{
    Node *newNode;
    newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

bool IsFull()
{
    if (NumberOfElement() == maxx)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsEmpty()
{
    if (TOP == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(Node *S, int value)
{
    Node *temp;
    temp = allocate(S, value);
    if (IsFull())
        cout << "stack full." << endl;
    else
    {
        if (IsEmpty())
        {
            TOP = temp;
        }
        else
        {
            temp->next = TOP;
            TOP = temp;
        }
    }
}

void pop(Node *temp)
{
    temp = TOP;
    if (TOP == NULL)
    {
        cout << "no data to be showed up." << endl;
    }
    else
    {
        TOP = TOP->next;
        temp->next = NULL;
        delete temp;
    }
}

void cetak()
{
    Node *temp = TOP;
    while (temp != NULL)
    {
        cout <<"["<< temp->data<<"]";
        temp = temp->next;

    }
    cout <<"->"<<endl;

}

int main()
{

    Node temp;
    push(&temp, 19);
    push(&temp, 20);
    push(&temp, 21);
    push(&temp, 22);
    push(&temp, 22);
    push(&temp, 22);
    pop(&temp);

    cetak();

}
