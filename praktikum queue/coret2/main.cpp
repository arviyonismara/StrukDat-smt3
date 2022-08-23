#include <iostream>

using namespace std;



int main()
{
   int a=10, b;
    int *pointer;
    pointer = &a;
    cout<< a << endl; //line 1

    b = *pointer;
    cout<< b << endl; // line 2

    //line 3
    pointer = &b;
    *pointer = 30;
    cout<< a << endl;
    cout<< b << endl;

    cout << "Hello world!" << endl;
    return 0;
}
