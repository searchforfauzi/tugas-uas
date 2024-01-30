#include <iostream>
#include <string>
#include "../Database/Database.h"

using namespace std;
void mAddKambing(string inpNama, string inpTanggal, string inpKondisi, double inpPanjang, double inpTinggi, double inpBerat)
{
    nama[nKambing] = inpNama;
    tanggal[nKambing] = inpTanggal;
    kondisi[nKambing] = inpKondisi;
    panjang[nKambing] = inpPanjang;
    tinggi[nKambing] = inpTinggi;
    berat[nKambing] = inpBerat;
    nKambing++;
}

void mViewKambing()
{
    cout << "Data Kambing" << endl;
    for (int i = 0; i < nKambing; i++)
    {
        cout << "Nama Kambing : "<< nama [i] << endl;
        cout << "Tanggal : " << tanggal [i] << endl;
        cout << "Panjang Kambing : " << panjang [i] << endl;
        cout << "Tinggi Kambing : " << tinggi [i] << endl;
        cout << "Berat Kambing : " << berat [i] << endl;
        cout << "Kondisi Kambing : " << kondisi [i] << endl;
    }
}

int mSearchKambing(string inpNamaKambing)
{
    for (int i = 0; i <= nKambing; i++)
    {
        if (inpNamaKambing == nama[i])
        {
            return i;
        }
    }
    return -1;
}

void mUpdateKambing(string inpNama, string inpTanggal, string inpKondisi, double inpPanjang, double inpTinggi, double inpBerat)
{
    int index;
    index = mSearchKambing(inpNama);
    if (index != -1)
    {
        nama[index] = inpNama;
        tanggal[index] = inpTanggal;
        kondisi[index] = inpKondisi;
        panjang[index] = inpPanjang;
        tinggi[index] = inpTinggi;
        berat[index] = inpBerat;
        cout << "Data Kambing sudah di Update";
    }
    else
    {
        cout << "Data Kambing tidak ada";
    }
}