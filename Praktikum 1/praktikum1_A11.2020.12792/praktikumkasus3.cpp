#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<< "masukan bilangan a : "<<endl;
    cin>>a;
    cout<< "masukan bilangan b : "<<endl;
    cin>>b;
    cout<< "masukan bilangan c : "<<endl;
    cin>>c;

    if ((a > b) && (a > c)){
        cout<< a << " merupakan bilangan terbesar"<<endl;
    }
    else if ((b > a) && (b > c)){
        cout<< b << " merupakan bilangan terbesar"<<endl;
    }
    else if ((c > a) && (c > b)){
        cout<< c << " merupakan bilangan terbesar"<<endl;
    }
    return 0;
}
