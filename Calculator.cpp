#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main()
{
    cout<<"____________________"<< endl;
    cout<<"__________"<< endl;
    cout<<"________________________"<< endl;
    int a,b;
    int x;
    char pilihan;
    int hasil;

    do
    {
  cout<<endl;
  cout<<endl;
   menu :
  cout << "PILIHAN MENU KALKULATOR: \n";
     cout << "1.Penjumlahan (+)\n";
     cout << "2.Pengurangan (-)\n";
     cout << "3.Perkalian (*)\n";
     cout << "4.Pembagian (/)\n";
  cout << "5.Modulo (%)n\n";
  cout << "Silahkan Masukan Nomor Menu : ";cin >> x;


     if ( x > 5 || x <1 ) {
         cout << "\nKode yang anda masukkan salah \n Mohon masukkan ulang kode .";
         system("pause");
         system("cls");
         goto menu;
     }
     else{
       cout<<"Masukan Angka Pertama :";cin>>a;
       cout<<"Masukan Angka Kedua :";cin>>b;
       if ( x == 1){
            hasil=a + b;
        cout<<"\n Hasil :" << hasil <<endl;
        cout <<"Menghitung Lagi?";cin>>pilihan;
       }else if ( x == 2){
            hasil=a - b;
        cout<<"\nHasil :" <<hasil <<endl;
        cout<<"Menghitung Lagi?";cin>>pilihan;
       }else if ( x == 3){
            hasil=a*b;
        cout<<"\nHasil :" <<hasil <<endl;
        cout<<"Menghitung Lagi?";cin>>pilihan;
       }else if ( x == 4){
            hasil=a / b;
        cout<<"\nHasil :" <<hasil <<endl;
        cout<<"Menghitung Lagi?";cin>>pilihan;
       }else if ( x == 5){
            hasil= a%b;
        cout<<"\nHasil :" <<hasil <<endl;
        cout<<"Menghitung Lagi?";cin>>pilihan;
    }
    }
    }
    while (pilihan /= 'y');
    cout <<"__________Terima Kasih__________";


    return 0;
}
