#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int n;
    int c;
    int Sn;

    //Sn = n/2 (a + Un)
    cout<<"masukan a : ";cin>>a;
    cout<<"masukan n : ";cin>>n;

    b = n / 2;
    c = a + n;
    Sn = b * c;
    cout<<"nilai Sn adalah "<<Sn<<endl;
    return 0;
}
