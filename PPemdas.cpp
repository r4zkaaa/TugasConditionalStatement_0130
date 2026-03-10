#include <iostream>
using namespace std;

float bb, tb; 

void inputbmi()
 {
    cout << "\n--- Selamat Datang Mahasiswa Ti Kelas C 2026 ---" << endl;
    cout << "Masukkan Berat Badan (kg): ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> tb;

}

 float hitungbmi (float berat, float tinggi)
{
    return berat / (tinggi * tinggi);

    }
   
string kategoribmi (float bmi)
{
    if (bmi < 18.5)
        return "Berat badan kurang";
    else if (bmi < 25)
        return "Berat badan normal";
    else if (bmi < 30)
          return "Berat badan kelebihan";
    else 
        return "Obesitas";
        
}

int main() 
{
    inputbmi();

    float bmi = hitungbmi (bb, tb);
    cout << "\n--- Hasil ---" << endl;