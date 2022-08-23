#include <iostream>

using namespace std;

int main()
{

    int i, j;
    int count;
    j = 0;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> i;
    for ( count = 1; count <= i; ++count) {
        j += count;
    }
    cout << "Sum = " << j << endl;

    return 0;
}
