#include <iostream>
using namespace std;

// Buatlah sebuah program untuk menghitung operasi perjumblahan pada suatu matrik 3x3
int main()
{
    int matriks1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriks2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrik3;
    int matrikRow = 3;
    int matrikCol = 3;

    // menampilkan matriks1
    cout << "Matriks 1 : " << endl;
    for (int i = 0; i < matrikRow; i++)
    {
        for (int j = 0; j < matrikCol; j++)
        {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }

    // menampilkan matriks2
    cout << "Matriks 2 : " << endl;
    for (int i = 0; i < matrikRow; i++)
    {
        for (int j = 0; j < matrikCol; j++)
        {
            cout << matriks2[i][j] << " ";
        }
        cout << endl;
    }

    // Perjumblahan matriks1 dan matriks2
    for (int i = 0; i < matrikRow; i++)
    {
        for (int j = 0; j < matrikCol; j++)
        {
            matrik3 = matriks1[i][j] + matriks2[i][j];
        }
        cout << endl;
    }

    // menampilkan hasil perjumblahan matriks1 dan matriks2
    cout << "Hasil Perjumblahan Matriks 1 dan Matriks 2 : " << endl;
    for (int i = 0; i < matrikRow; i++)
    {
        for (int j = 0; j < matrikCol; j++)
        {
            cout << matrik3 << " ";
        }
        cout << endl;
    }

    return 0;
}