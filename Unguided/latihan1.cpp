#include <iostream>
using namespace std;

struct mahasiswa {
    char nama[40];
    char nim[15];
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

float hitungNilai(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa max 10: ";
    cin >> n;

    mahasiswa mhs[10];

    for (int i = 0; i < n; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin >> mhs[i].nama;
        cout << "NIM   : ";
        cin >> mhs[i].nim;
        cout << "UTS   : ";
        cin >> mhs[i].uts;
        cout << "UAS   : ";
        cin >> mhs[i].uas;
        cout << "Tugas : ";
        cin >> mhs[i].tugas;

        mhs[i].nilai_akhir = hitungNilai(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "Daftar Nilai Mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "Nilai Akhir : " << mhs[i].nilai_akhir << endl;
    }
    return 0;
}