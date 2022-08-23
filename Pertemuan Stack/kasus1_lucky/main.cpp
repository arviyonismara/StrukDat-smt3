#include<iostream>
using namespace std;

struct STACK
{
    int Arr[10];
    int top;
};

STACK stack;

void inisialisasi(){
    stack.top = -1;
}

bool isEmpty(){
    if (stack.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isFull(){
    if(stack.top == 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Push(int input){
    stack.top++;
    stack.Arr[stack.top] = input;
}

int Pop(){
    stack.top--;
    return stack.Arr[stack.top+1];
}

void cetak(){
    int i;
    cout << "Data: " << endl;
    for (int i = 0; i <= stack.top; i++)
    {
        cout << stack.Arr[i] << " " ;
        cout << endl;
    }

}
int main(){
    int input, option;
    inisialisasi();
    do
    {
        cout << endl;
        cout << "1. push data"<< endl;
        cout << "2. pop data"<< endl;
        cout << "3. print data"<< endl;
        cout << "4. clear data"<< endl;
        cout << "5. exit"<< endl;
        cout << "Pilih : ";
        cin >> option;
        switch (option)
        {
        case 1:
            if (isFull() == 1)
            {
                cout << "Stack penuh!" << endl;
            }
            else
            {
                cout << "Masukan value : ";
                cin >> input;
                Push(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Stack kosong!" << endl;
            }
            else
            {
                cout << "Data yang di POP : " << Pop() << endl;
            }
            break;
        case 3:
            if (isEmpty() == 1)
            {
                cout << "Stack kosong!" << endl;

            }
            else
            {
            cetak();
            }
            break;
        case 4:
            inisialisasi();
            break;
        }
    } while (option >= 1 && option <= 4);

    return 0;
}
