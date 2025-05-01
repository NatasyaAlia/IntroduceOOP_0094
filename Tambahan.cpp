#include <iostream>
using namespace std;

class Segitiga {
private:
    int alas;
    int tinggi;
    
    bool isGanjil(int angka) {
        return angka % 2 != 0;
    }
    
    float hitungLuas() {
        return 0.5 * alas * tinggi;
    }

public:
    
    void inputData() {
        cout << "Masukkan Alas Segitiga : ";
        cin >> alas;
        cout << "Masukkan Tinggi Segitiga : ";
        cin >> tinggi;
    }
    
    
    void outputData() {
        float luas = hitungLuas();
        if (isGanjil(alas)) {
            cout << "Catatan: Alas yang dimasukkan adalah bilangan ganjil." << endl;
        }
        cout << "Luas Segitiga : " << luas << " cm" << endl;
    }
    
    void displayInfo() {
        cout << "\nInformasi Segitiga:" << endl;
        cout << "Alas: " << alas << " cm" << endl;
        cout << "Tinggi: " << tinggi << " cm" << endl;
        outputData();
    }
};

int main() {
    Segitiga segitiga;
    
    cout << "PROGRAM PENGHITUNG LUAS SEGITIGA" << endl;
    cout << "-------------------------------" << endl;
    
    segitiga.inputData();
    segitiga.displayInfo();
    
    return 0;
}