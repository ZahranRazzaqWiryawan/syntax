#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    // Menghapus titik koma setelah if
    if (nilai >= 60) {
        cout << "Selamat! Anda lulus." << endl;  // Ini bagian dari blok if
    } else {
        cout << "Maaf, Anda belum lulus." << endl; // Ini bagian dari blok else
    }

    return 0;
}