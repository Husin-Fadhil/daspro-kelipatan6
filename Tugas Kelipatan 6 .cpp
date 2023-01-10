//judul
//kelipatan 6 < 100
//husin fadhil azizi
#include <iostream>
using namespace std;

//kamus



//deskripsi
int main ()
{
    int counter = 0;
    int kelipatan = 6;

    while (kelipatan < 100){
        cout << "Bilangan Ke" << counter +1 << " : " << kelipatan << endl;
        kelipatan = kelipatan + 6;
        counter = counter +1;
    }
    return 0;
}
