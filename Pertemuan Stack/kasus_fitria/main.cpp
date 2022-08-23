#include <iostream>
using namespace std;

class IsStack
{
    public:
        int top;
        int data[10];
};

IsStack Stack;

bool isFull()
{
    if ( Stack.top == 9 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty(){
    if(Stack.top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pushArray(int dataInput)
{
    Stack.top++;
    Stack.data[Stack.top] = dataInput;
}

int popArray()
{
    return Stack.data[Stack.top];
}

void setawal()
{
    Stack.top = -1;
}

void print(){
    int i;
    cout << "Data: " << endl;
    for (int i = 0; i <= Stack.top; i++)
    {
        cout << Stack.data[i] << " " ;
        cout << endl;
    }

}


int main(){
    int choose, input;
    setawal();
    do
    {
        cout << "1. push data"<< endl;
        cout << "2. pop data"<< endl;
        cout << "3. print data"<< endl;
        cout << "4. clear data"<< endl;
        cout << "5. exit"<< endl;
        cout << "Pilih : ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            if(isFull() == 1)
            {
                cout << "Tumpukan Penuh" << endl;
            }
            else
            {
                cout << "Data yang di push: ";
                cin >> input;
                pushArray(input);
            }
            break;
        case 2:
            if (isEmpty() == 1)
            {
                cout << "Tumpukan Kosong";
            }
            else
            {
                cout << "Data yang di pop " << popArray() << endl;
            }
            break;
        case 3:
            if(isEmpty()==1)
            {
                cout << "Tumpukan kosong";
            }
            else
            {
                print();
            }
            break;

        case 4:
            setawal();
            break;
        }
    } while (choose >= 1 && choose <= 4);
    return 0;
}
