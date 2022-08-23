#include <iostream>

using namespace std;

struct tElmtStack {
    int data;
    struct tElmtStack * next;
};
typedef struct tElmtStack Stack;
Stack * TOP;

void push (Stack * temp, int x) {
    temp = new Stack;
    temp->data = x;
    temp->next = NULL;
    if(TOP == NULL) {
        TOP = temp;
    }
    else{
        temp->next = TOP;
        TOP = temp
    }
}

void pop (Stack * temp) {
    temp = TOP;
    if(TOP == NULL) {
        cout << “stack kosong”;
    }
    else{
        TOP = TOP->next;
        temp->next = NULL;
        delete temp;
    }
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
