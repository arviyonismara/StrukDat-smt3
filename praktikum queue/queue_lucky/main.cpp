#include <iostream>
#define Maxx 10
using namespace std;

struct queue
{
    int arrQ[Maxx];

}QueuePointer;

// declare var global
int head, tail;

void inisialisasi(queue *s)
{
    head = -1;
    tail = -1;
}

bool IsEmpty()
{
    if(tail == -1){
        return true;
    }
    else{
        return false;
    }
}


void enqueue(queue *s, int data){
    if (IsEmpty() == true)
    {
        tail++;
        head++;
        s->arrQ[head] = data;
    }
    else
    {
        tail++;
        s->arrQ[tail] = data;
    }
}

void enMiddleQueue(queue *s, int data, int posisi){
    if( posisi == head || posisi == tail)
    {
        cout << "Tidak bisa menambahkan di awal atau akhir" << endl;
    }
    else
    {
        tail++;
        for (int i = posisi; i <= tail - 1; i++)
        {
            s->arrQ[posisi + 1] = s->arrQ[posisi];
        }
        s->arrQ[posisi] = data;
    }
}

void DequeueMiddle(queue *s, int posisi)
{
    for (int i = posisi; i <= tail; i++)
    {
        s->arrQ[i] = s->arrQ[i+1];
    }
    tail--;
}

void DequeueLast(queue *s){
    tail--;
}

void DequeueFirst(queue *s)
{
    for(int i = head; i <= tail; i++)
    {
        s->arrQ[i] = s->arrQ[i + 1];
    }
    tail--;
}

void edtFirst(queue *s, int data){
    s->arrQ[head] = data;
}

void edtLast(queue *s, int data){
    s->arrQ[tail] = data;
}

void edtMiddle(queue *s, int data, int posisi){
    if (posisi == head || posisi==tail)
    {
        cout << "Hanya untuk posisi di tengah" << endl;
    }
    else
    {
        s->arrQ[posisi] = data;
    }
}

void PrintDisplay(queue *s)
{
    for(int i = head; i <= tail; i++)
    {
        cout << "Posisi ke-" << i << " " << " [ " << s->arrQ[i] << " ] " << endl;
    }
}

// int main()
// {
//     inisialisasi(&QueuePointer);
//     int option, data, posisi;
//     do
//     {
//         cout<<"Metode tersedia :"<<endl;
// 		cout<<"1. Enqueue"<<endl;
// 		cout<<"2. Dequeue"<<endl;
// 		cout<<"3. PrintDisplay Queue"<<endl;
// 		cout<<"4. Keluar Program"<<endl;
// 		cout<<"Pilih metode : ";
//         cin>>option;

//         if(option == 1)
//         {
//             cout << "Masukan data: ";
//             cin >> data;
//             Enqueue(&QueuePointer, data);
//         }
//         if(option == 2)
//         {
//             Dequeue(&QueuePointer);
//         }
//         if(option == 3)
//         {
//             PrintDisplay(&QueuePointer);
//         cout << "\n";
//         }
//         if(option == 4)
//         {
//             cout << "Posisi : ";
//             cin >> posisi;
//             DequeueMiddle(&QueuePointer, posisi);
//         }
//         cout << "\n";
//     }
//     while(option != 5);
//     return 0;
// }

int main(){
    inisialisasi(&QueuePointer);
    enqueue(&QueuePointer, 1);
    enqueue(&QueuePointer, 2);
    enqueue(&QueuePointer, 3);
    enqueue(&QueuePointer, 4);
    enqueue(&QueuePointer, 5);
    enqueue(&QueuePointer, 6);
    enqueue(&QueuePointer, 7);
    enMiddleQueue(&QueuePointer, 100, 5);



    PrintDisplay(&QueuePointer);
}
