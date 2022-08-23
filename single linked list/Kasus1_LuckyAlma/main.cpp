#include <iostream>
using namespace std;

struct LinkedList
{
    int data;
    LinkedList *next;
} node * head, *cur, *newNode;

void createLinkedList()
{
    head = new LinkedList();
    head->data = 100;
    head->next = NULL;
}

void insertDepan(int data)
{
    newNode = new LinkedList();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void cetakDepan()
{
    cout << head->data << endl;
}

void cetakBelakang()
{
    cur = head;
    while (cur != NULL)
    {
        if (cur->next == NULL)
        {
            cout << cur->data << endl;
        }
        cur = cur->next;
    }
}

void cetak()
{
    cur = head;
    while (cur != NULL)
    {
        cout << cur->data;
        if (cur->next == NULL)
        {
            break;
        }
        cout << " -> ";
        cur = cur->next;
    }
}

int main()
{
    int option, data;
    createLinkedList();
    do
    {
        cout << endl;
        cout << "1. Masukan depan" << endl;
        cout << "2. Cetak depan" << endl;
        cout << "3. Cetak belakang" << endl;
        cout << "4. Cetak" << endl;
        cout << "5. Exit" << endl;
        cout << "Masukan opsi: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Masukan data: ";
            cin >> data;
            insertDepan(data);
            break;
        case 2:
            cetakDepan();
            break;
        case 3:
            cetakBelakang();
            break;
        case 4:
            cetak();
            break;
        default:
            break;
        }
    } while (option > 0);

    cetak();

    return 0;
}
