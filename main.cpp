#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;



//Function yang digunakan
float totkuis(float kuis1,float kuis2)
{
    return (kuis1+kuis2)/2*20/100;
}
float tottugas(float total)
{
    return total/4*10/100;
}
float nilaiuts(float uts)
{
    return uts*30/100;
}
float nilaiuas(float uas)
{
    return uas*40/100;
}
//float ipk(float nilaiakhir)
//{
    //return nilaiakhir/25;
//}
string mengulang(float nilaiakhir)
{
    if(nilaiakhir>=50){
        return "Tidak Mengulang";
    }
    else{
        return "Mengulang";
    }
}

string rating(float nilaiakhir)
{
    if(nilaiakhir>=80){
        return "A";
    }
    else if(nilaiakhir>=65){
        return "B";
    }
    else if(nilaiakhir>=50){
        return "C";
    }
    else if(nilaiakhir>=40){
        return "D";
    }
    else{
        return "E";
    }
}

string ucapan(float nilaiakhir)
{
    if(nilaiakhir>=50){
        return "SELAMAT ANDA TIDAK MENGULANG MATA KULIAH INI,TETAP SEMANGAT DALAM MENGEJAR PRESTASI UNTUK JADI YANG LEBIH BAIK";
    }
    else{
        return "MOHON MAAF ANDA MENGULANG MATA KULIAH INI,TETAP SEMANGAT DALAM MEMPERBAIKINYA JANGAN PUTUS ASA";
    }
}

int main()
{
    int nim;
    string nama,kelas;
    float kuis1,kuis2,tugas,uas,uts,total=0,nilaiakhir;

    cout<<"PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA"<<endl;

    //tipe data dan variabel

    cout<<endl;

    //input
    cout<<"BIODATA SISWA"<<endl;
    cout<<endl;
    cout<<"Masukan Nama:";
    getline(cin,nama);
    cout<<"Masukan NIM:";
    cin>>nim;
    cout<<"Masukan Kelas:";
    cin>>kelas;

    cout<<endl;
    cout<<endl;


    cout<<"DAFTAR NILAI SISWA"<<endl;
    nilai1:
    cout<<"Kuis1=";
    cin>>kuis1;
    if ((kuis1>100)||(kuis1<0))
    {
        cout << "Nilai Salah masukan lagi !" << endl;
        getche();
        goto nilai1;
    }
    nilai2:
    cout<<"Kuis2=";
    cin>>kuis2;
    if ((kuis2>100)||(kuis2<0))
    {
        cout << "Nilai Salah masukan lagi !" << endl;
        getche();
        goto nilai2;
    }

    nilai3:
    for(int i=1;i<=4;i++){
        cout<<"Tugas "<<i<<"=";
        cin>>tugas;
        if ((tugas>100)||(tugas<0))
    {
        cout << "Nilai Salah masukan lagi !" << endl;
        getche();
        goto nilai3;
    }

        total=total+tugas;
    }
    nilai4:
    cout<<"Nilai UTS:";
    cin>>uts;
    if ((uts>100)||(uts<0))
    {
        cout << "Nilai Salah masukan lagi !" << endl;
        getche();
        goto nilai4;
    }
    nilai5:
    cout<<"nilai UAS:";
    cin>>uas;
    if ((uas>100)||(uas<0))
    {
        cout << "Nilai Salah masukan lagi !" << endl;
        getche();
        goto nilai5;
    }

    cout<<endl;
    cout<<endl;
    //output
    totkuis(kuis1,kuis2);
    tottugas(total);
    nilaiuts(uts);
    nilaiuas(uas);

    nilaiakhir=totkuis(kuis1,kuis2)+nilaiuts(uts)+nilaiuas(uas)+tottugas(total);

    cout<<"HASIL PERHITUNGAN"<<endl;
    cout<<"NAMA:"<<nama<<endl;
    cout<<"NIM:"<<nim<<endl;
    cout<<"KELAS:"<<kelas<<endl;
    cout<<"NILAI AKHIR= "<<nilaiakhir<<endl;
    //cout<<"IPK= "<<ipk(nilaiakhir)<<endl;
    cout<<"MENGULANG ATAU TIDAK ?"<<mengulang(nilaiakhir)<<endl;
    cout<<"RATE: "<<rating(nilaiakhir)<<endl;
    cout<<ucapan(nilaiakhir);
    cout<<endl;



    return 0;
}
