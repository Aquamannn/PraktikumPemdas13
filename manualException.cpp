#include <iostream>
using namespace std;

int main()
{
    try{
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5 //melemparkan sebuah interger maka
        cout << "Pernyataan ini tidak akan di eksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan di eksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    
}