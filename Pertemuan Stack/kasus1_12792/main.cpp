#include <iostream>
#define Max 5

using namespace std;

int arr[Max]; //deklarasi stack bertipe array
int top;
void inisialisasi();
int isEmpty();
int isFull();
void Push(int);
void Pop();
void cetak();

int main()
{
    cout << "----Program Stack!----" << endl;
    inisialisasi();
    Push(5);
    cetak();
    return 0;
}

void inisialisasi(){
    top = -1;
}

int isEmpty(){
    // mengecek stack kosong atau tidak
    if( top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    //mengecek stack penuh atau tidak
    if( top == Max-1){
        return 1;
    }
    else{
        return 0;
    }
}

void Push(int nilai){
    //menambahkan x sebagai elemen stack
    //syarat input : cek stack penuh atau belum penuh
    if (isFull() == 1){
        cout<< "stack is full";
    }
    else{
        top++;
        arr[top] == nilai;
    }
}

void Pop(){
    //syarat pop: cek stack kosong atau ada isinya
    if (isEmpty() == 1){
        cout<< "stack is empty";
    }
    else{
        top--;//remove data
    }
}

void cetak(){
    //cetak stack berdasarkan range elemen awal sampai elemen teratas
    for(int i=top; i>=0; i--){
        cout<<"["<<arr[i]<<"]"<<endl;
    }
}
