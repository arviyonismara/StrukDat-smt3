#include <iostream>
using namespace std;

struct node
{
    string data;
    node *next;
} * head, *tail;

void addFirst(node *temp, string data)
{
    temp = new node;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = head;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void reverse()
{
    node *prev, *temp;
    node *cur = head;
    prev = head;
    node *before = NULL;
    while (cur != NULL)
    {
        prev = prev->next;
        cur->next = before;
        before = cur;
        cur = prev;
    }
    temp = head;
    head = tail;
    tail = head;

    cout << "Reverse Success" << endl;
}

void print()
{
    node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data;
        cur = cur->next;
    }
}

int main()
{
    node *temp;
    addFirst(temp, "S");
    addFirst(temp, "T");
    addFirst(temp, "R");
    addFirst(temp, "U");
    addFirst(temp, "K");
    addFirst(temp, "T");
    addFirst(temp, "U");
    addFirst(temp, "R");
    addFirst(temp, " ");
    addFirst(temp, "D");
    addFirst(temp, "A");
    addFirst(temp, "T");
    addFirst(temp, "A");
    print();
    reverse();
    print();
    return 0;
}
