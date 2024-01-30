#include <string>
#include <iostream>
#include "../Model/Model.h"

using namespace std;

void vAddKambing ()
{
    string nama, kondisi, tanggal;
    double berat, tinggi, panjang;
    cout << "Nama Kambing : ";
    cin >> nama;
    cout << "Tanggal : ";
    cin >> tanggal;
    cout << "Kondisi Kambing : ";
    cin >> kondisi;
    cout << "Panjang Kambing : ";
    cin >> panjang;
    cout << "Tinggi Kambing : ";
    cin >> tinggi;
    cout << "Berat Kambing : ";
    cin >> berat;
    mAddKambing (nama, tanggal, kondisi, panjang, tinggi, berat);
    
}

void vViewKambing ()
{
    mViewKambing ();
}

void vUpdateKambing ()
{
    string nama, kondisi, tanggal;
    double berat, tinggi, panjang;
    cout << "Nama Kambing : ";
    cin >> nama;
    cout << "Tanggal Update: ";
    cin >> tanggal;
    cout << "Kondisi Kambing Update : ";
    cin >> kondisi;
    cout << "Panjang Kambing Update : ";
    cin >> panjang;
    cout << "Tinggi Kambing Update : ";
    cin >> tinggi;
    cout << "Berat Kambing Update : ";
    cin >> berat;
    mUpdateKambing (nama, tanggal, kondisi, panjang, tinggi, berat);
}