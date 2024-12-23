#include <iostream>
using namespace std;

// Buatlah contoh program yang mana mengunakan sizeof() untukv mengetahui jumlah dari panjang array
int main()
{
    int arr[] = {1, 2, 3};
    // sizeof(arr) akan mengembalikan ukuran array dalam byte 1 array int = 4 byte jadi 3 * 4 = 12
    // sizeof(arr[0]) akan mengembalikan ukuran elemen pertama dari array jadi 4
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Panjang array : " << arrSize << endl;

    return 0;
}