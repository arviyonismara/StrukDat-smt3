#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int i, j, n;
    cout<<"masukan n : "; cin>>n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout<< j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
