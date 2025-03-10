#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan nilai
    float presensi, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Input nilai dari pengguna
    cout << "Masukkan nilai presensi (0-100): ";
    cin >> presensi;

    cout << "Masukkan nilai tugas (0-100): ";
    cin >> nilaiTugas;

    cout << "Masukkan nilai UTS (0-100): ";
    cin >> nilaiUTS;

    cout << "Masukkan nilai UAS (0-100): ";
    cin >> nilaiUAS;

    // Hitung nilai akhir menggunakan rumus yang diberikan
    nilaiAkhir = (0.1 * presensi) + (0.25 * nilaiTugas) + (0.25 * nilaiUTS) + (0.4 * nilaiUAS);

    // Tampilkan hasil
    cout << "Nilai akhir perkuliahan: " << nilaiAkhir << endl;

    return 0;
}