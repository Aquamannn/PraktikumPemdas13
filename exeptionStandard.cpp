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
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan di eksekusi karna array data hanya memiliki 3 elemen */
    }
    cout << "baris proram terakhir" << endl;
    /*penanda 2: bahwa program di jalankan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}