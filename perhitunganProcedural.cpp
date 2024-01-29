#include <iostream>
using namespace std;

#define RESET "\033[0m"
#define BLACK "\033[30m"    /* Warna hitam */
#define RED "\033[31m"      /* Warna merah */
#define GREEN "\033[32m"    /* Warna hijau */
#define YELLOW "\033[33m"   /* Warna kuning */
#define BLUE "\033[34m"     /* Warna biru */
#define MAGENTA "\033[35m"  /* Warna ungu */
#define CYAN "\033[36m"     /* Warna cyan */
#define WHITE "\033[37m"    /* Warna putih */
#define BOLD "\033[1m"      /* Huruf tebal */
#define UNDERLINE "\033[4m" /* Huruf bergaris bawah */

#define GOLD "\033[38;2;255;215;0m"           // RGB values for gold color
#define SILVER "\033[38;2;192;192;192m"       // RGB values for silver color
#define NEON_GREEN "\033[38;2;57;255;20m"     // RGB values for neon green color
#define GREEN2 "\033[38;2;0;128;0m"           // RGB values for #008000 (green)
#define REDDISH_PINK "\033[38;2;208;113;113m" // RGB values for #D07171 (reddish-pink)
#define NEON_RED "\033[38;2;255;0;0m"         // RGB values for neon red

void MenghitungUmur()
{
    string nama, asal, tujuan, Jenis;
    int tanggalLahir, bulanLahir, tahunLahir;
    float Tanggal;

    cout << endl
         << endl
         << endl;
    cout << BOLD << GREEN2 << "===============" << RESET << BOLD << WHITE << "|" << RESET << BOLD << GREEN2 << "[" << RESET << BOLD << WHITE << "      Menghitung Umur      " << RESET << BOLD << GREEN2 << "]" << RESET << BOLD << WHITE << "|" << RESET << BOLD << GREEN2 << "===============" << RESET << endl
         << endl;

    cout << BOLD << GOLD << "<>" << RESET << " Masukkan Tanggal Kelahiran " << BOLD << GOLD << ":" << RESET << " ";
    cin >> tanggalLahir;

    cout << BOLD << GOLD << "<>" << RESET << " Masukkan Bulan Kelahiran   " << BOLD << GOLD << ":" << RESET << " ";
    cin >> bulanLahir;

    cout << BOLD << GOLD << "<>" << RESET << " Masukkan Tahun Kelahiran   " << BOLD << GOLD << ":" << RESET << " ";
    cin >> tahunLahir;

    switch (bulanLahir)
    {
    case 1:
        Jenis = "Januari";
        Tanggal = 1;
        break;
    case 2:
        Jenis = "Februari";
        Tanggal = 2;
        break;
    case 3:
        Jenis = "Maret";
        Tanggal = 3;
        break;
    case 4:
        Jenis = "April";
        Tanggal = 4;
        break;
    case 5:
        Jenis = "Mei";
        Tanggal = 5;
        break;
    case 6:
        Jenis = "Juni";
        Tanggal = 6;
        break;
    case 7:
        Jenis = "Juli";
        Tanggal = 7;
        break;
    case 8:
        Jenis = "Agustus";
        Tanggal = 8;
        break;
    case 9:
        Jenis = "September";
        Tanggal = 9;
        break;
    case 10:
        Jenis = "Oktober";
        Tanggal = 10;
        break;
    case 11:
        Jenis = "November";
        Tanggal = 11;
        break;
    case 12:
        Jenis = "Desember";
        Tanggal = 12;
        break;
    }

    time_t now = time(0);
    tm *sekarang = localtime(&now);

    // Menghitung umur
    int umur = sekarang->tm_year + 1900 - tahunLahir;

    // Memeriksa apakah ulang tahun sudah terjadi atau belum
    if (sekarang->tm_mon + 1 < Tanggal || (sekarang->tm_mon + 1 == Tanggal && sekarang->tm_mday < tanggalLahir))
    {
        umur--;
    }

    cout << "Umur Anda adalah " << umur << " tahun.\n";
}

char konversiNilai(int nilai)
{
    if (nilai >= 80 && nilai <= 100)
        return 'A';
    else if (nilai >= 60 && nilai < 80)
        return 'B';
    else if (nilai >= 40 && nilai < 60)
        return 'C';
    else if (nilai >= 20 && nilai < 40)
        return 'D';
    else
        return 'E';
}

void KonversiNilaiKeHuruf()
{
    int nilai;

    cout << endl;
    cout << BOLD << REDDISH_PINK << "===============" << RESET << BOLD << WHITE << "|" << RESET << BOLD << REDDISH_PINK << "[" << RESET << BOLD << WHITE << "  Konversi Nilai Ke Huruf  " << RESET << BOLD << REDDISH_PINK << "]" << RESET << BOLD << WHITE << "|" << RESET << BOLD << REDDISH_PINK << "===============" << RESET << endl
         << endl;
    cout << "Masukan Nilai Kamu      : ";
    cin >> nilai;

    char grade = konversiNilai(nilai);

    // Output hasil konversi
    cout << "Nilai huruf Anda adalah : " << grade << endl;

    // Menentukan kelulusan
    if (grade >= 'A' && grade <= 'C')
    {
        cout << "Anda" << NEON_GREEN << " LULUS\n"
             << RESET;
    }
    else
    {
        cout << "Anda" << NEON_RED << " TIDAK LULUS\n"
             << RESET;
    }
}

void MenghitungUangPecahan()
{
    int nilai, sisa;

    int pecahan[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 100, 50, 20, 10, 5, 1};

    cout << endl
         << endl;
    cout << "===============|[  Menghitung Uang Pecahan  ]|===============" << endl
         << endl;

    cout << "           =====================================" << endl;
    cout << "           ||     1    ||    2    ||    3     ||" << endl;
    cout << "           =====================================" << endl;
    cout << "           ||  Rupiah  ||  Dolar  ||   Euro   ||" << endl;
    cout << "           =====================================" << endl;
    cout << endl;
    cout << "Pilih mata uang : ";
    int pilihan;
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Masukkan Uang Yang Anda Inginkan : Rp. ";
        break;
    case 2:
        cout << "Masukkan Uang Yang Anda Inginkan : $";
        break;
    case 3:
        cout << "Masukkan Uang Yang Anda Inginkan : €";
        break;
    default:
        cout << "Pilihan mata uang tidak valid.\n";
        return;
    }

    cin >> nilai;

    for (int i = 0; i < 14; ++i)
    {
        int jumlah = nilai / pecahan[i];

        if (jumlah > 0)
        {
            cout << "Lembar Uang " << pecahan[i];

            if (pilihan == 1 && pecahan[i] >= 1000)
                cout << " : " << jumlah << BOLD << GREEN << " lembar" << RESET;
            else if (pilihan == 1 && pecahan[i] < 1000)
                cout << "  : " << jumlah << BOLD << GOLD << " koin" << RESET;
            else
                cout << "   : " << jumlah;

            cout << endl;
        }

        sisa = nilai % pecahan[i];
        nilai = sisa;
    }
}

void menu()
{
    int menu;

    cout << endl;
    cout << BOLD << CYAN << "===============[ " << WHITE << "MENU" << CYAN << " ]=================" << RESET << endl
         << BOLD << WHITE << "||" << RESET << "1. Menghitung Umur                  " << BOLD << WHITE << "||" << endl
         << BOLD << WHITE << "||" << RESET << "2. Konversi Nilai Ke Huruf          " << BOLD << WHITE << "||" << endl
         << BOLD << WHITE << "||" << RESET << "3. Menghitung Uang Pecahan          " << BOLD << WHITE << "||" << endl
         << BOLD << CYAN << "========================================" << RESET << endl
         << BOLD << WHITE << "||" << RESET << "0. Exit                             " << BOLD << WHITE << "||" << endl
         << BOLD << CYAN << "========================================" << RESET << endl
         << "Pilih Aksi yang Di Inginkan : ";
    cin >> menu;

    switch (menu)
    {
    case 0:
        cout << "Terimakasih!\n";
        break;

    case 1:
        MenghitungUmur();
        break;

    case 2:
        KonversiNilaiKeHuruf();
        break;

    case 3:
        MenghitungUangPecahan();
        break;

    default:
        cout << "Menu tidak tersedia!\n";
        break;
    }
}

int main()
{
    char ulang;
    do
    {
        menu();
        cout << "\nIngin Menghitung Ulang? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
