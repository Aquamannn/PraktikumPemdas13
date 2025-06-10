#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main (){
    string baris;
    string NamaFile;
    cout << "Masukkan nama file : ";
    cin >> NamaFile;
    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file 
    outfile.open(NamaFile+ ".txt", ios::out);
    cout << ">= menulis file \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while (true) 
    {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti ketika memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai 'baris' ke dalam file
        outfile << baris << endl;

    }
    //selesai dalam menulis sekarang tutup file
    outfile.close();
    //Membuka file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah nama file
    infile.open(NamaFile, ios::in);
    cout << endl; << ">= membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
      
    }
}