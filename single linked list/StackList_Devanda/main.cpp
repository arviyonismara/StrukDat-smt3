#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
}*TOP;
node *alokasi(node *S, int x)
{
    node *bantu;
    bantu = new node;
    bantu->data = x;
    bantu->next = NULL;
    return bantu;
}
bool isEmpty() //mengembalikan false or true
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
int NumberOfElement(node *bantu) //mengembaliin variabel number yang berisi jumlah dari seluruh node didalam stack
{
    bantu = TOP;
    int hitung = 0;
    while(bantu!= NULL)
    {
        hitung += 1;
        bantu = bantu->next;
    }
    return hitung;
}
void push(node *s, int x) //memasukkan data
{
    node *temp;
    temp = alokasi(s, x);
    if (isEmpty()== true)
    {
        TOP = temp;
    }
    else
    {
        temp->next = TOP;
        TOP=temp;
    }
}
void pop(node *s) //menghapus data yang masuk terakhir
{
    s = TOP;
    if (TOP == NULL)
        cout << "kosong" <<endl;
    else
    {
        TOP = TOP->next;
        s->next = NULL;
        delete s;
    }
}
void cetak()
{
    node *bantu = TOP;
    while(bantu!= NULL)
    {
        cout << bantu->data;
        bantu = bantu->next;
    }
    cout << endl;
}
int main()
{
    node temp;
    push(&temp, 1);
    push(&temp, 2);
    push(&temp, 3);
    push(&temp, 4);
    push(&temp, 5);
    cetak();
}
