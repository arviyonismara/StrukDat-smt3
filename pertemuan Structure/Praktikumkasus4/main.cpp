#include <iostream>

using namespace std;

void tampilXY(int x, int y);

struct nilai
{
    int x;
    int y;
};

int main()
{
    nilai n1;

    cout << "Input X value : ";
    cin >> n1.x;
    cout << "Input Y value : ";
    cin >> n1.y;

    tampilXY(n1.x, n1.y);
    return 0;
}

void tampilXY(int x, int y){
    cout << "Nilai dari  X adalah : " << x << endl;
    cout << "Nilai dari Y adalah : " << y << endl;
}
