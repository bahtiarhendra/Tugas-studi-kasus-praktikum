#include<iostream>
using namespace std;

class sks{
	public:
		void proses();
		void output();
		int nim;
		char nama[50];
	private:
		int hrg = 150000, sks[20], a, i;
		char mk[20][10];	
		float tot,subtot,tot1, tot2, m, n;
}sk;

void sks::proses(){

cout<<"masukan jumlah mata kuliah : ";
cin>>a;
cout<<endl;
for(int i=0; i<a; i++){
	cout<<"masukan mata kuliah : ";
	cin>>mk[i];
	cout<<"masukan sks : ";
	cin>>sks[i];
	tot+=sks[i];
	subtot = tot*150000;
	m = subtot*0.25;
	tot1= subtot-m;
	tot2 = tot1;
	cout<<endl;
	}
}

void sks::output(){
	cout<<"================================"<<endl;
	cout<<"{	HASIL PENGISIAN KRS	}"<<endl;
	cout<<"================================"<<endl;
	cout<<"Nama Mahasiswa		: "<<sk.nama<<endl;
	cout<<"NIM			: "<<sk.nim<<endl;
	cout<<"Harga per sks		: "<<hrg<<endl;
	cout<<"Daftar list matkul	: "<<endl;
	for(int i=0; i<a; i++){
		cout<<"\t\t\t\t\t-"<<mk[i]<<endl;
	}
	cout<<"Total sks		: "<<tot<<endl;
	cout<<"Subtotal sks		: "<<subtot<<endl;
	cout<<"Diskon 25%		: "<<tot1<<endl;
	cout<<"Total pembayaran	: "<<tot2<<endl;
	cout<<endl;
}

int main(){
	int nim;
	char nama[50];
	float tot;
	cout<<"================================"<<endl;
	cout<<"{	INPUT PENGISISAN KRS	}"<<endl;
	cout<<"================================"<<endl;
	cout<<"Masukan Nama 	: ";
	cin>>sk.nama;
	cout<<"Masukan NIM	: ";
	cin>>sk.nim;
	sks x;
	x.proses();
	x.output();
}
