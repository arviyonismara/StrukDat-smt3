#include <iostream>

using namespace std;

int main()
{
    //membuat segitiga angka
    int i,j,k;
    cout<<"masukan Angka k : ";
    cin>>k;
    cout<<"\n";
    //misal k = 5
    for(i=k; i>=1;i--){
        for(j=i;j>1;j--){
            if(i==k||j==i)
                cout<<"  ";
            else
                cout<<"  ";
        }
       for(j=1;j<=k+1-i;j++){
            cout<<j;
            if(j!=i)cout<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
