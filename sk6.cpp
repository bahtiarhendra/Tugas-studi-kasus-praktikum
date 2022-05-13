#include<iostream>
using namespace std;

class nilai{
	private:
		string nama_dosen, nama_matkul;
		int mhs, i , nilai[100];
		int max = -1000;
		int min = 1000;
		float total,rata;
		
	public:
		void input();
		void proses();
		void output();	
};

void nilai::input(){
	cout<<"Masukan Nama Dosen	: ";
	cin>>nama_dosen;
	cout<<"Masukan Nama Matkul	: ";
	cin>>nama_matkul;
	cout<<"Jumlah Mahasiswa		: ";
	cin>>mhs;
	cout<<"===================="<<endl;
	cout<<"Daftar Nilai"<<endl;
	
	for(i=0; i < mhs; i++){
		cout<<i+1<<". ";
		cin>>nilai[i];
	}
}

void nilai::proses(){
	total = 0;
	for(i=0; i<mhs; i++){
		total = total + nilai[i];
	}
	rata = (total/mhs);
	
	for(i=0; i<mhs; i++){
		if(nilai[i]>max){
			max = nilai[i];
		}
		if(nilai[i]<min){
			min = nilai[i];
		}
	}
}

void nilai::output(){
	cout<<"===================="<<endl;
	cout<<"Rata-Rata		: "<<rata<<endl;
	cout<<"Nilai Tertinggi	: "<<max<<endl;
	cout<<"Nilai Terendah	: "<<min<<endl;
	cout<<"===================="<<endl;
}
int main(){
	nilai x;
	x.input();
	x.proses();
	x.output();
	return 0;
}
