#ifndef IBU_H
#define IBU-H
#include <vektor>

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \ "" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "ibu \"" << nama << "\" tidak ada\n";
    }
    void tambah Anakk(anak*);
    void cetakAnak();
};