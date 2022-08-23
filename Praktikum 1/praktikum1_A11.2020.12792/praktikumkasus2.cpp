#include <iostream>
//praktikum kasus 2
using namespace std;

int main()
{
    int a;
    cout<<"masukan bilangan : "<<endl;
    cin>>a;

    if (a % 2 == 0){
        cout<<a<<" merupakan bilangan genap"<<endl;
    }
    else if (a % 2 != 0){
        cout<<a<<" merupakan bilangan ganjil"<<endl;
    }
    else{
        cout<< "anda salah input"<<endl;
    }

    return 0;
}
