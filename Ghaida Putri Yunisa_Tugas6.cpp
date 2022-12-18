#include <iostream>
using namespace std;

float gajipokok (float);
float lembur (float);
float makan (float);
float transport (float);
int main (){

    float jamKerja,NIP,gajiperjam;
    string Nama;
    cout << "==============================================" << endl;
    cout << "Menghitung Gaji Harian Karyawan PT. XYZ" << endl;
    cout << "==============================================" << endl;
    cout << "NIP: ";
    cin >> NIP;
    cout << "Nama: ";
    cin >> Nama;
    cout << "Jumlah jam kerja: ";
    cin >> jamKerja;

    cout << "Gaji Pokok : " << gajipokok (jamKerja) << endl;
    if (jamKerja > 8)
        cout << "Uang Lembur : " << lembur (jamKerja) << endl;
        cout << "Uang Makan : " << makan(1) << endl;
        cout << "Uang Transpot : " << transport(1) << endl;
    if (jamKerja >=9){
        cout << "Uang Makan : " << makan(1) << endl;
    }
    if (jamKerja >=10){
        cout << "Uang Transport : " << transport(1) << endl;
    }

return 0;
}

float gajipokok (float x){
    float y ;
    y = x * 7500;
    return y;
}
float lembur (float x){
    float y;
    y = (x-8)*11250;
    return y;
}
float makan (float x){
    float y ;
    y = x * 10000;
    return y;
}
float transport (float x){
    float y ;
    y = x * 13000;
    return y;
}
