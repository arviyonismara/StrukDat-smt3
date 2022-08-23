#include <iostream>

using namespace std;

int main()
{
    int arr[5]={1, 3, 5, 6, 7}, a, baris, value;
    int *Ptr;
    string edit;

    // Print value and address before pointer
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << "Nilai dari arr[" << i << "] : " << arr[i] << " Address : " << &arr[i] << endl;
    }
    cout << endl << endl;

    // change value without change address
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << "Baris yang ingin di ubah: ";
        cin >> baris;
        cout << "Nilai yang ingin di ubah: ";
        cin >> value;
        arr[baris] = value;
        a = arr[baris];
        Ptr = &a;
        cout << "Edit (y/t): ";
        cin >> edit;
        if(edit == "t")
        {
            break;
        }
    }

    cout << endl << endl;
    // Print value and address after pointer
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << "Nilai dari arr[" << i << "] : " << arr[i] << " Address : " << &arr[i] << endl;
    }

    return 0;
}

	// cout << endl;
	// // ukuran array
	// cout << "ukuran : " << nilai.size() << endl;


    return 0;
}
