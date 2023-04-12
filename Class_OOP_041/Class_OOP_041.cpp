#include <iostream>
using namespace std;

class mahasiswa {

private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "masukkan NIM : ";
		cin >> nim;
		cout << "masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void inputmk();
	void tampilmk();

};

void matakuliah::inputmk() {
	cout << "\nMasukkan Kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukkan Sks Mata Kuliah : ";
	cin >> sks;
}

void matakuliah::tampilmk() {
	cout << "\nKode : " << kode << endl;
	cout << "Nama MataKuliah : " << namamk << endl;
	cout << "jumlah SKS : " << sks << endl;
}