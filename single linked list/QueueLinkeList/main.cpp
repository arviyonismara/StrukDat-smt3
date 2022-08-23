#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *head = NULL, *tail, *newNode, *cur, *del;

int count()
{
    cur = head;
    int number = 0;
    while (cur != NULL)
    {
        number += 1;
        cur = cur->next;
    }
    return number;
}

void addQueue(Node *temp, int data)
{
    if (head == NULL)
    {
        head = new Node;
        head->data = data;
        head->next = NULL;
        tail = head;
    }
    else
    {
        temp = new Node;
        temp->data = data;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
}

void delQueue(Node *temp)
{
    del = head;
    head = head->next;
    del->next = NULL;
    delete del;
}

void printQueue(Node *temp = head)
{
    cout << "Queue: ";
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next == NULL)
        {
            break;
        }
        cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node temp;
    addQueue(&temp, 8);
    addQueue(&temp, 18);
    addQueue(&temp, 28);
    addQueue(&temp, 38);
    delQueue(&temp);
    addQueue(&temp, 90);
    printQueue();

    return 0;
}
