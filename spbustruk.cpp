#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

struct data_BBM{
    string kode_BBM;
    string nama_BBM;
    int harga;
};

int main()
{
    string nama_penjaga, jenis, code, cus;
    data_BBM BBM;
    string kode_BBM[2]={"1", "2"};
    string nama_BBM[2]={"Pertalite", "Pertamax"};
    int jml_uang, kembali, total=0;
    string no_pompa, no_selang;
    float liter, harga, uang;

    cout << "======================================="<<endl;
    cout << "    Selamat Datang di SPBU 44.433.26   "<<endl;
    cout << "    Jl. Bangsa Indonesia, Yogyakarta   "<<endl;
    cout << "======================================="<<endl;
    cout << "List Harga BBM : "<<endl;
    cout << "Kode        Jenis BBM         Harga "<<endl;
    cout << " 1           Premium      Rp. 7.000,00"<<endl;
    cout << " 2          Pertamax      Rp. 9.000,00"<<endl;
    cout << "---------------------------------------"<<endl;

    cout << "Kode BBM : "; cin >> BBM.kode_BBM;
    if (BBM.kode_BBM == "1"){
        cout << "Jenis BBM : "<<nama_BBM[0]<<endl;
        cout << "Rp. 7.000/liter";
        jenis = "Pertalite";
        harga = 7000;
        nama_penjaga = "Anto";
        no_pompa = "1";
        no_selang = "1";
    }
    else if (BBM.kode_BBM == "2"){
        cout << "Jenis BBM : "<<nama_BBM[1]<<endl;
        cout << "Rp. 9.000/liter";
        jenis = "Pertamax";
        harga = 9000;
        nama_penjaga = "Farhan";
        no_pompa = "2";
        no_selang = "2";
    }
    else {
        cout << "Maaf anda salah memasukkan kode BBM";
    }
        cout << endl;
        cout << "Nama Customer : "; cin >>cus;
        cout << "Beli       : "; cin >> uang;
        cout << "Bayar      : "; cin >> jml_uang;
        total = total + uang;
        liter = uang / harga;
        kembali = jml_uang - uang;
        cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    ofstream pos;
	pos.open("spbu.txt",ios::out);
	pos<<"=======================================================";
	pos<<"\n\t\t\tSTRUK PEMBELIAN";
	pos<<"\n=======================================================\n";
    pos << "                   -PERTAMINA-                        "<<endl;
    pos << "                 -SPBU 44.433.26-                     "<<endl;
    pos << "        -Jl. Bangsa Indonesia, Yogyakarta -          "<<endl;
    pos << "                -Telp 0281 643663-                    "<<endl;
    pos << "------------------------------------------------------"<<endl;
    pos <<endl;
    pos << "Nomor Pompa    : "<<no_pompa<<endl;
    pos << "Nomor Selang   : "<<no_selang<<endl;
    pos << "Nama Customer  : "<<cus<<endl;
    pos << "Jenis BBM      : "<<jenis<<endl;
    pos << "Liter          : "<<liter<<endl;
    pos << "Harga/liter    : Rp. "<<harga<<",00"<<endl;
    pos << "Total          : Rp. "<<total<<",00"<<endl;
    pos << "Bayar          : Rp. "<<jml_uang<<",00"<<endl;
    pos << "Kembali        : Rp. "<<kembali<<",00"<<endl;
    pos << "======================================================"<<endl;
    pos << "Operator       : "<<nama_penjaga<<endl;
    pos << "           TERIMA KASIH DAN SELAMAT JALAN             ";
    pos.close();

    return 0;
}
