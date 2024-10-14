#include <iostream>
using namespace std;

int main() {
	int senku;
	cout << "=====================================" << endl;
	cout << "PROGRAM MENCARI BILANGAN PRIMA SENKU" << endl;
	cout << "=====================================" << endl;
	cout << "BILANGAN AKAN DICARI MULAI DARI 1" << endl;
	cout << "MASUKAN RENTANG BILANGAN: ";
	cin >> senku;
    for (int i = 2; i <= senku; i++) {
        bool isPrima = true;
        // Cek apakah i adalah bilangan prima
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {         //    2 -> 2 <= 2 / 2 -> 2 <= 1 -> isprima true
                isPrima = false;      //    3 -> 2 <= 3 / 2 -> 3 <= 1.5 -> isprisma true
                break;                //    4 -> 2 <= 4 / 2 -> 4 <= 2 -> ( 4 % 2 == 0 ) true -> isprisma false
            }                         //    5 -> 5 <= 5 / 2 -> 5 <= 2.5 -> ( 5 % 2.5 ==
        }
        if (isPrima) {
            cout << i << " ";
        }
    }
	return 0;
}

//rumus mencari bilanagan prima >> (n : 1 == n)
//								   (n : n == 1)