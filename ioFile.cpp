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
    
}