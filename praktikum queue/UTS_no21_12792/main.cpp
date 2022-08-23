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

void PrintDisplay(queue *s)
{
    for(int i = head; i <= tail; i++)
    {
        cout << " [ " << s->arrQ[i] << " ] ";
    }
}

int main(){
    inisialisasi(&QueuePointer);
    enqueue(&QueuePointer, 1);
    enqueue(&QueuePointer, 2);
    enqueue(&QueuePointer, 3);
    enqueue(&QueuePointer, 4);
    enqueue(&QueuePointer, 5);
    enqueue(&QueuePointer, 6);
    enqueue(&QueuePointer, 7);

    PrintDisplay(&QueuePointer);
}
