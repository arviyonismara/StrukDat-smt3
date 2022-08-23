#include <iostream>

using namespace std;

void PassByRederence(int *b){
    cout << "  Nilai dari b : " << *b+5 << endl;
    cout << "Address from b : " << b << endl << endl;
}

void PassByValue(int x){
    cout << "  Nilai dari x : " << x << endl;
    cout << "Address from x : " << &x << endl << endl;
}

struct dek
{
    int x;
};


int main()
{
    dek n1;
    n1.x = 15;

    system("cls");
    // value and address
    cout << "  Nilai dari a : " << n1.x << endl;
    cout << "Address from a : " << &n1.x << endl << endl ;

    PassByRederence(&n1.x);
    PassByValue(n1.x);

    cout << "Hasil dari a kuadrat adalah: " << n1.x*n1.x << endl;

    return 0;
}
