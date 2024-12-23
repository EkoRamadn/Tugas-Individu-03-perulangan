#include <iostream>
using namespace std;

// Nuatlah suato program unutk menghitung operasi perkalian pada suatu matriks 3x3
int main()
{
    int matriks1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriks2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrik3[3][3];
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

    // Perkalian matriks1 dan matriks2
    for (int i = 0; i < matrikRow; i++)
    {
        for (int j = 0; j < matrikCol; j++)
        {
            matrik3[i][j] = 0;
            for (int k = 0; k < matrikCol; k++)
            {
                matrik3[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    // menampilkan hasil perkalian matriks1 dan matriks2
    cout << "Hasil Perkalian Matriks 1 dan Matriks 2 : " << endl;
    for (int i = 0; i < matrikRow; i++)
    {
        for (int j = 0; j < matrikCol; j++)
        {
            cout << matrik3[i][j] << " ";
        }
        cout << endl;
    }
}

// matris3[1][1]
// matrik1[1][1] * matrik2[1][1] = 1 * 9 = 9
// matrik1[1][2] * matrik2[2][1] = 2 * 6 = 12
// matrik1[1][3] * matrik2[3][1] = 3 * 3 = 9
// matris3[1][1] = 9 + 12 + 9 = 30

// matris3[1][2]
// matrik1[1][1] * matrik2[1][2] = 1 * 8 = 8
// matrik1[1][2] * matrik2[2][2] = 2 * 5 = 10
// matrik1[1][3] * matrik2[3][2] = 3 * 2 = 6
// matris3[1][2] = 8 + 10 + 6 = 24

// matris3[1][3]
// matrik1[1][1] * matrik2[1][3] = 1 * 7 = 7
// matrik1[1][2] * matrik2[2][3] = 2 * 4 = 8
// matrik1[1][3] * matrik2[3][3] = 3 * 1 = 3
// matris3[1][3] = 7 + 8 + 3 = 18