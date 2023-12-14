#include <iostream>

using namespace std;

int main() 
{
    bool repeat = true;
    
    do {
        int a, b;

        cout << "Masukkan bilangan ganjil: ";
        cin >> a;

        cout << "Masukkan bilangan genap: ";
        cin >> b;
        
        cout << endl;

        if (a % 2 != 0 && b % 2 == 0) {
        cout << "Benar, ini bilangan ganjil dan genap" << endl;
        } else {
            cout << "Dia bukan bilangan ganjil dan genap" << endl;
        }
        
        cout << "Apakah anda ingin melakukan pengulangan? (y/n): ";
        char choice;
        cin >> choice;
        repeat = (choice == 'y' || choice == 'Y');
    }while (repeat);

    return 0;
}