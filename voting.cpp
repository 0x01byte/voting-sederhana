#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int memilih, jumlah1 = 0, jumlah2 = 0, jumlah3 = 0;
string voting;
string kandidat[3];
string username, password;
char pilihan, coba;

void resetJumlahSuara() {
    jumlah1 = 0;
    jumlah2 = 0;
    jumlah3 = 0;
}

int main() {
    awal:
    system("cls");
    cout << "PROGRAM E-VOTING" << endl;
    cout << "LOGIN : " << endl;
    cout << "Masukkan Username : ";
    cin >> username;
    cout << "Masukkan Password : ";
    cin >> password;

    if (username == "Admin" && password == "adminuhamka") {
        system("cls");
        cout << "####### SELAMAT DATANG DI PROGRAM E-VOTING #######" << endl;
        cout << "Halo " << username << endl;
        cout << "INGIN MELAKUKAN VOTING APA ? ";
        cin.ignore(); // Untuk membersihkan buffer sebelum menggunakan getline
        getline(cin, voting);
        system("cls");
        cout << "MASUKKAN NAMA-NAMA KANDIDAT (MAX 3) " << endl;
        cout << "KANDIDAT 1 : ";
        getline(cin, kandidat[0]);
        cout << "KANDIDAT 2 : ";
        getline(cin, kandidat[1]);
        cout << "KANDIDAT 3 : ";
        getline(cin, kandidat[2]);
        do {
            system("cls");
            cout << "VOTING " << voting << " DIMULAI !!!" << endl;
            cout << "NAMA-NAMA KANDIDAT ADALAH SEBAGAI BERIKUT : " << endl;
            cout << "KANDIDAT 1. " << kandidat[0] << endl;
            cout << "KANDIDAT 2. " << kandidat[1] << endl;
            cout << "KANDIDAT 3. " << kandidat[2] << endl;
            cout << "MASUKKAN PILIHAN MU : ";
            cin >> memilih;

            switch (memilih) {
                case 1:
                    cout << "Kamu Memilih Nomor 1. " << kandidat[0] << endl;
                    jumlah1 = jumlah1 + 1;
                    cout << "Jumlah Suara : " << jumlah1 << endl;
                    break;
                case 2:
                    cout << "Kamu Memilih Nomor 2. " << kandidat[1] << endl;
                    jumlah2 = jumlah2 + 1;
                    cout << "Jumlah Suara : " << jumlah2 << endl;
                    break;
                case 3:
                    cout << "Kamu Memilih Nomor 3. " << kandidat[2] << endl;
                    jumlah3 = jumlah3 + 1;
                    cout << "Jumlah Suara : " << jumlah3 << endl;
                    break;
                default:
                    cout << "Pilihan Tidak Ada" << endl;
                    break;
            }
            cout << "Mau pilih lagi (y/n) ?";
            cin >> pilihan;
        } while (pilihan == 'y' || pilihan == 'Y');

        cout << "\n";
        cout << "PROGRAM SELESAI" << endl;
        cout << "JUMLAH SUARA 1. " << kandidat[0] << " ADALAH = " << jumlah1 << "\nJUMLAH SUARA 2. "
             << kandidat[1] << " ADALAH = " << jumlah2 << "\nJUMLAH SUARA 3. " << kandidat[2] << " ADALAH = " << jumlah3 << endl;

        // Setelah selesai voting, reset jumlah suara
        resetJumlahSuara();

    } else {
        cout << "LOGIN GAGAL !!!" << endl;
    }
    cout << "LOGIN LAGI ? (y/n) : ";
    cin >> coba;

    if (coba == 'y' || coba == 'Y') {
        goto awal;
    } else {
        goto akhir;
    }

    akhir:
    system("cls");
    cout << "---------------------------------" << endl;
    cout << "PROGRAM SELESAI !!!\nTERIMA KASIH !!!" << endl;

    return 0;
}

