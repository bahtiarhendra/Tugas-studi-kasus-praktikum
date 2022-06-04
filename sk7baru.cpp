#include <iostream>
using namespace std;

class list
{
public:
	void input();
	void urut();
	void cari();

private:
	int n, pil;
	string nama[100];
	double nim[100], tmp, c;
};

void list::input()
{
	cout << "Banyaknya data mahasiswa: ";
	cin >> n;
	cout << endl;
	cout << "Masukkan Data Mahasiswa" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Data Mahasiswa ke-" << i + 1 << endl;
		cout << "NIM    : ";
		cin >> nim[i];
		cout << "Nama   : ";
		cin >> nama[i];
		cout << endl;
	}
}

void list::urut()
{
	cout << "Urutkan Data Mahasiswa dengan NIM Secara" << endl;
	cout << "1. Naik  (Ascending)" << endl;
	cout << "2. Turun (Descending)" << endl;
	cout << "Pilihan anda : ";
	cin >> pil;
	switch (pil)
	{
	case 1:
		cout << "Data NIM diurut (Naik)	: ";
		for (int a = 0; a < n; a++)
		{
			for (int b = n - 1; b >= a; b--)
			{
				if (nim[b] < nim[b - 1])
				{
					tmp = nim[b];
					nim[b] = nim[b - 1];
					nim[b - 1] = tmp;
				}
			}
			cout << nim[a] << " ";
		}
		break;
	case 2:
		cout << "\nData NIM diurut (Turun)	: ";
		for (int i = 1; i < n; i++)
		{
			for (int d = 0; d < n - i; d++)
			{
				if (nim[d] < nim[d + 1])
				{
					tmp = nim[d];
					nim[d] = nim[d + 1];
					nim[d + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << " " << nim[i];
		}
		break;
	}
}

void list::cari()
{
	cout << "\nInput NIM Mahasiswa yang akan dicari: ";
	cin >> c;

	// proses pencarian array
	for (int i = 0; i <= n; i++)
	{
		if (nim[i] == c)
		{
			cout << "NIM ditemukan pada data ke-" << i + 1 << endl;
			cout << "Data Mahasiswa ke-" << i + 1 << endl;
			cout << "NIM    : " << nim[i] << endl;
			cout << "Nama   : " << nama[i] << endl;
		}
	}
}

int main()
{
	list mhs;
	mhs.input();
	mhs.urut();
	mhs.cari();
	return 0;
}
