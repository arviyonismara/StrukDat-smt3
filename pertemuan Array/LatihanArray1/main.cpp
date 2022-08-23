#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int i;

    for (i = 1; i <= 5; i++){
        cin>>array[i];
    }
    for (i = 1; i <= 5; i++){
        cout<<array[i]<<endl;
    }
    return 0;
}
