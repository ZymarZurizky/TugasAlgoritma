#include <iostream>
using namespace std;

void luasSegitiga () {
    int a,b;
    float sum;
    cout << "--------------LUAS SEGITIGA--------------" << endl;
    cout << "Rumus = 1/2 x a x t" << endl << endl;
    cout << "Input panjang alas : ";
    cin >> a;
    cout << "Input tinggi  : ";
    cin >> b;
    sum = 0.5*a*b;
    cout << "Hasil   : " << sum << endl << endl;
}

void luasPersegi () {
    int a,b;
    float sum;
    cout << "--------------LUAS PERSEGI--------------" << endl;
    cout << "Rumus = sisi x sisi" << endl << endl;
    cout << "Input panjang sisi : ";
    cin >> a;
    
    sum = a*a;
    cout << "Hasil   : " << sum << endl << endl;
}

void luasLingkaran () {
    int a,b;
    float phi=3.14, sum;
   cout << "--------------LUAS LINGKARAN--------------" << endl;
   cout << "Rumus = phi x r^2" << endl;
   cout << "Input panjang jari-jari    : ";
   cin >> a;
   sum = phi*(a*a);
   cout << "Hasil              : " << sum << endl << endl;
}

void luasPersegiPanjang () {
    int a,b;
    float sum;
   cout << "--------------LUAS PERSEGI--------------" << endl
        << "Rumus = p x l" << endl << endl
        << "Input panjang p : ";
   cin >> a;
            cout << "Input panjang l : ";
   cin >> b;
   sum = a*b;
   cout << "Hasil   : " << sum << endl << endl;
}

void menu () {
    int menu;
    cout << "\n----------MENU----------\n"
         << "(1)LUAS SEGITIGA\n"
         << "(2)LUAS PERSEGI\n"
         << "(3)LUAS LINGKARAN\n"
         << "(4)LUAS PERSEGI PANJANG\n"
         << "\nPilih Menu (Masukan Angka) : "
         << "(5)KELUAR\n";
    cin >> menu;

        switch (menu) {
            case 5:
                cout << "Terimakasih!\n";
            break;

            case 1:
                luasSegitiga ();
            break;

            case 2:
                luasPersegi ();
            break;

            case 3:
                luasLingkaran ();
            break;

            case 4:
                luasPersegiPanjang ();
            break;

            default:
                cout << "Menu tidak tersedia!\n";
            break;
        }
}

int main () {
    char ulang;
    do {
        menu ();
        cout << "\nIngin Menghitung Ulang? (y/n): ";
        cin >> ulang;
    }
    while (ulang =='y' || ulang =='Y');
}