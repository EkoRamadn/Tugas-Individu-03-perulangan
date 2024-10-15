

#include <iostream>
#include <typeinfo> 
using namespace std;

int main()
{
    //harga sesudah diskon ;
    // 150000 - (12.5 /100 * 150000)

    int hargaKaos = 150000;
    double diskon = 12.5;

    int hargaDiskon = hargaKaos * (diskon / 100);
    int hargaSetelahDiskon = hargaKaos - hargaDiskon;

    cout << "Harga : " << hargaKaos << " ribu" << endl;
    cout << "Diskon : " << diskon << endl;
    cout << "Besar diskon dari harga : " << hargaDiskon << endl;
    cout << "Harga setelah diskon = " << hargaSetelahDiskon << " ribu" << endl;
   


    return 0;
}

