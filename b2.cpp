#include <iostream>
using namespace std;

int main() {
    float a, phi, r, t, tp, kerucut, bola, limas, prisma;
    int pilihan;

    system ("cls");
    cout << "Masukkan alas: "; 
    cin >> a;
    cout << "Masukkan jari-jari: "; 
    cin >> r;
    cout << "Masukkan tinggi: "; 
    cin >> t;
    cout << "Masukkan angka: "; 
    cin >> tp;

    phi = 3.14;
    kerucut = (1.0/3.0) * phi * r * r * t;
    bola = (4.0/3.0) * phi * r * r * r;
    limas = (1.0/3.0) * a * t;
    prisma = (1.0/2.0) * a * t * tp;

    cout << "1. Volume kerucut\n";
    cout << "2. Volume bola\n";
    cout << "3. Volume limas\n";
    cout << "4. Volume prisma\n";
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Volume kerucut adalah: " << kerucut << endl;
            break;
        case 2:
            cout << "Volume bola adalah: " << bola << endl;
            break;
        case 3:
            cout << "Volume limas adalah: " << limas << endl;
            break;
        case 4: 
            cout << "Volume prisma adalah: " << prisma << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}