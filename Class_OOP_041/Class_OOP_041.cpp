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