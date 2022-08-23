#include<iostream>
using namespace std;

struct STACK
{
    int data[5];
    int top, tail;
}tumpuk;

void inisialisasi()
{
    tumpuk.top = -1;
    tumpuk.tail = -1;
}

bool isEmpty()
{
    if(tumpuk.top == -1){
        return 1;
    } else {
        return 0;
    }
}

bool isFull(){
    if(tumpuk.tail == 4){
        return 1;
    } else {
        return 0;
    }
}

void enqueue(int input){
    if (isEmpty() == 1)
    {
        tumpuk.tail++;
        tumpuk.top++;
        tumpuk.data[0] = input;
    }
    else
    {
        tumpuk.tail++;
        tumpuk.data[tumpuk.tail] = input;
    }
}

void dequeue(){
    for (int i = 0; i <= tumpuk.tail; i++)
    {
        tumpuk.data[i] = tumpuk.data[i+1];
    }
    tumpuk.tail--;
}

void showData(){
    cout << "Data: " << endl;
    for (int i = 0; i <= tumpuk.tail; i++)
    {
        cout << tumpuk.data[i] << " ";
    }
    cout << endl;
}

int main(){
    int pilih, input;
    inisialisasi();
    do {
        cout <<"1. enqueue data"<< endl;
        cout <<"2. dequeue data"<< endl;
        cout <<"3. showData data"<< endl;
        cout <<"4. clear data"<< endl;
        cout <<"5. exit"<< endl;
        cout <<"Pilih : " << endl;
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            if(isFull() == 1){
                cout << "Tumpukan Penuh" << endl;
            } else {
                cout << "Input data yang di enqueue: " << endl;
                cin >> input;
                enqueue(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            } else {
                cout << "Data berhasil di dequeue " << endl;
                dequeue();
            }
            break;
        case 3:
            if(isEmpty() == 1)
            {
                cout << "Tumpukan Kosong" << endl;
            } else {
                showData();
            }
            break;
        case 4:
            inisialisasi();
            break;
        }
    }while (pilih >= 1  && pilih <= 4);



    return 0;
}
