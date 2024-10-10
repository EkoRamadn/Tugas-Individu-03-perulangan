#include <iostream>;
using namespace std;

int main() {

	int n;
	int jumGanjil = 0;
	int jumGenap = 0;
	cout << " Masukan jumlah data :";
	cin >> n;
	for (int i = 0; i < n; i++) {
		if(!(i % 2 == 0)) {
			jumGanjil += i;
		} else {
			jumGenap += i;
		}
	}
	cout << " Jumlah total bilangan ganjil : " << jumGanjil << endl;
	cout << " Jumlah total bilangan genap : " << jumGenap << endl;

	return 0;
}

// hasil yang diharapkan
// 
// Masukan jumlah data : 10
// Jumlah total bilangan ganjil : 25
// Jumlah total bilangan genap : 20