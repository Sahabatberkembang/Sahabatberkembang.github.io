#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float nilaiUjian, nilaiTugas, nilaiPraktikum, nilaiAkhir;

    // Input nilai ujian, tugas, dan praktikum
    cout << "Masukkan nilai ujian: ";
    cin >> nilaiUjian;

    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;

    cout << "Masukkan nilai praktikum: ";
    cin >> nilaiPraktikum;

    // Menghitung nilai akhir dengan bobot tertentu
    nilaiAkhir = (0.4 * nilaiUjian) + (0.3 * nilaiTugas) + (0.3 * nilaiPraktikum);

    // Menampilkan nilai akhir
    cout << "Nilai akhir mahasiswa: " << nilaiAkhir << endl;

    // Menentukan grade berdasarkan nilai akhir
    if (nilaiAkhir >= 80) {
        cout << "Grade: A" << endl;
    } else if (nilaiAkhir >= 70) {
        cout << "Grade: B" << endl;
    } else if (nilaiAkhir >= 60) {
        cout << "Grade: C" << endl;
    } else if (nilaiAkhir >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E" << endl;
    }

    return 0;
}
