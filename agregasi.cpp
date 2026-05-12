#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main(){ //agregasi
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varanak2);
    varIbu->tambahAnak(varAnak3);
    raiIbu->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakanak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    
}   