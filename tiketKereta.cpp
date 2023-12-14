#include <iostream>
#include <string>

using namespace std;

int main()
{
  bool repeat = true;

  do
  {
    string nama, asal, tujuan, Jenis;
    int kelas;
    int jumlah_penumpang;
    float harga, potongan, total_harga;

    cout << endl;
    cout << "================< KAI Acces >================" << endl
         << endl;

    cout << "Masukkan Nama Anda      : ";
    getline(cin, nama);
    cout << "Masukkan Stasiun Asal   : ";
    getline(cin, asal);
    cout << "Masukkan Stasiun Tujuan : ";
    getline(cin, tujuan);
    cout << endl
         << endl;
    cout << "================< Kelas Kereta >===============" << endl
         << endl;
    cout << "1. Ekonomi    : (Rp.100.000/Person)" << endl;
    cout << "2. Bisnis     : (Rp.200.000/Person)" << endl;
    cout << "3. Eksekutif  : (Rp.300.000/Person)" << endl;
    cout << endl;
    cout << "Pilih Kelas Yang Anda Inginkan : ";
    cin >> kelas;
    cout << "Masukkan jumlah penumpang      : ";
    cin >> jumlah_penumpang;

    switch (kelas)
    {
    case 1:
      Jenis = "Ekonomi";
      harga = 100000 * jumlah_penumpang;
      break;
    case 2:
      Jenis = "Bisnis";
      harga = 200000 * jumlah_penumpang;
      break;
    case 3:
      Jenis = "Eksekutif";
      harga = 300000 * jumlah_penumpang;
      break;
    }

    if (harga > 500000)
    {
      potongan = 0.1 * harga;
    }
    else if (harga > 300000)
    {
      potongan = 0.05 * harga;
    }
    else if (harga > 200000)
    {
      potongan = 0.02 * harga;
    }
    else
    {
      potongan = 0;
    }

    total_harga = harga - potongan;

    cout << endl;
    cout << "================< Tiket Print >================" << endl
         << endl;
    cout << nama << "         "
         << "-< kelas : " << Jenis << " >- " << endl;
    cout << endl;
    cout << asal << " ----------------> " << tujuan << endl;
    cout << endl;

    cout << "Jumlah penumpang : " << jumlah_penumpang << " Orang" << endl;
    cout << "Jumlah Tiket     : Rp." << harga << endl;
    cout << "Potongan harga   : Rp." << potongan << endl;
    cout << "Total harga      : Rp." << total_harga << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Apakah Anda Ingin Memesan Tiket Kembali? : ";
    char choice;
    cin >> choice;
    repeat = (choice == 'iya' || choice == 'Y');
  } while (repeat);

  return 0;
}