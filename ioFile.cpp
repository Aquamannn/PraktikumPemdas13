#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    // membuka file dalam module menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("confohfile.txt");
    cout << "> Menulis File, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis

    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai 'baris' ke dalam file 
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup file
    outfile.close();
    // membuka file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah nama file
    infile.open("confohfile.txt");
    cout << ">= Mmembuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //menampilkan baris
            cout << baris << '\n';
        }
        //menutup file
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}