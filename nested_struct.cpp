#include <iostream> 
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa
{
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main ()
{
    // Membuat object struct dalam array
    Mahasiswa mhs [2];
    for (int i = 0; i < 2; i++)
  