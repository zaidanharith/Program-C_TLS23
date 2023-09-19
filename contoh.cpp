#include <iostream>
using namespace std;

int main(){

     // Inisiasi variabel
     double a,b,op;

     // Input
     cout << "Masukkan angka : ";
     cin >> a;
     cout << "1 : Tambah\n2 : Kurang\n3 : Kali\n4 : Bagi\nMasukkan tanda yang sesuai : ";
     cin >> op;
     cout << "Masukkan angka : ";
     cin >> b;
     
     // Logika
     cout << "Hasilnya adalah : ";
     if(op == 1) cout << a+b << endl;
     else if(op == 2) cout << a-b << endl;
     else if(op == 3) cout << a*b << endl;
     else if(op == 4) cout << a/b << endl;
     else cout << "Tidak Terdefinisi" << endl;

     return 0;
}