#include <iostream>

using namespace std;

struct nilai{
    int x;
    int y;
};

int main(){
    struct nilai n1;
    n1.x = 5;
    n1.y = 10;
    cout<<"x: "<<n1.x <<endl;
    cout<<"y: "<<n1.y <<endl;
}

