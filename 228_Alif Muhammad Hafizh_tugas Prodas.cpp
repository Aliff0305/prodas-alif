#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string pass;

    cout << "Masukkan username: ";
    getline(cin, nama);  // Mengambil input username sebagai string
    cout << endl;

    cout << "Masukkan password: ";
    cin >> pass;  // Mengambil input password sebagai string
    cout << endl;

    // Memeriksa apakah username dan password sesuai
    if (nama == "admin" && pass == "admin") {
        cout << "Login berhasil" << endl;
    } 
    else if (nama == "user" && pass == "user") {
        cout << "Login berhasil" << endl;
    } 
    else if (nama == "petugas" && pass == "petugas") {
        cout << "Login berhasil" << endl;
    } 
    else {
        cout << "Login gagal" << endl;
    }

    return 0;
}

