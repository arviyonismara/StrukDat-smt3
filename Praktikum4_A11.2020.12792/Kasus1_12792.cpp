#include <iostream>

using namespace std;

int main()
{
    //kasus 1 membuat inputan deret kedalam array
    int n;
    cout<<"masukan banyak deret ";cin>>n;
    int arr[n];
    int i, j;
    int sum;

    for (i=1; i <= n; i++){
        cout<<"masukan angka : ";
        cin>>arr[i];
        sum = sum+arr[i];

    }
    cout<<"deret: ";
    for (j = 1; j <= n; j++){
        cout<< arr[j] <<" ";
    }
    //kasus 1a ,menambahkan penjumlahan dan rata2
    cout<<"\njumlah : "<< sum<<endl;
    cout<<"rata2  : "<< (sum/n);

    return 0;
}
