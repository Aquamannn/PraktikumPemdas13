#include <iostream>
#include <exeption> 
// untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan digunakan
using namespace std;

int main ()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try {
        array<int, 3> data = {10, 20, 30};
        //pessan array interger 3 elemen
        cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
}