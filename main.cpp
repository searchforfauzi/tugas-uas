#include <string>
#include <iostream>
#include "view/view.h"

using namespace std;

void menu ()
{
    int pilih;
    cout << pilih;
    do
    {
        
        cout << "Menu Kambing" << endl;
        cout << "1. Tambah Kambing \n";
        cout << "2. Lihat Kambing \n";
        cout << "3. Update Kondisi Kambing \n";
        cout << "0. Exit \n";
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilih;
        switch (pilih)
        {
            case 1:
                vAddKambing ();
                break;
            case 2:
                vViewKambing ();
                break;
            case 3:
                vUpdateKambing ();
                break;
            case 0:
                pilih = 0;
                break;
            default:
                cout << "Pilihan Tidak Ada" << endl;
                break;
        }
    } while (pilih != 0);
}
int main ()
{
    menu ();
}