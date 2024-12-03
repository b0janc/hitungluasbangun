#include <iostream>
#include <cmath>
using namespace std;

void Persegi(int sisi = 0) {

	cout << "Masukkan sisi Persegi: ";
	cin >> sisi;
	int luas, keliling;
	luas = sisi * sisi;
	keliling = 4 * sisi;
	cout << "Luas persegi: " << luas << endl;
	cout << "Keliling persegi: " << keliling << endl;
}

void PersegiPanjang(int panjang = 0, int lebar = 0) {
	cout << "\nMasukkan panjang persegi panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar persegi panjang:";
	cin >> lebar;
	int luas, keliling;
	luas = panjang * lebar;
	keliling = 2 * (panjang + lebar);

	cout << "Luas persegi panjang: " << luas << endl;
	cout << "Keliling persegi panjang: " << keliling << endl;

}


void segitiga(double alas=0, double tinggi=0) {
	cout << "Masukkan alas segitiga siku-siku: ";
	cin >> alas;
	cout << "Masukkan tinggi segitiga siku-siku: ";
	cin >> tinggi;
	double miring = sqrt(alas * alas + tinggi * tinggi);
	cout << "Masukkan miring segitiga siku-siku:  " << miring <<endl;
	double luas = 0.5 * alas * tinggi;
	double Keliling = alas + tinggi + sqrt(alas*alas+ tinggi*tinggi);
	cout << "luas segitiga = " << luas << "\n";
	cout << "Keliling segitiga = " << Keliling << "\n";
}


void lingkaran(double jarijari=0) {
	cout << "Masukkan jari-jari lingkaran: ";
	cin >> jarijari;
	double luas = 3.14 * jarijari * jarijari;
	double Keliling = 3.14 * 2 * jarijari;
	cout << "luas lingkaran = " << luas << "\n";
	cout << "Keliling lingkaran = " << Keliling << "\n";
}
void main() {
	int choice;

	do {
		cout << "\nPiliih bentuk untuk menghitung (1.Persegi, 2.Persegi Panjang, 3.Segitiga siku-siku, 4.Lingkaran): ";
		cin >> choice;

		switch(choice) {
		    case 1:
				Persegi();
				break;
			case 2:
				PersegiPanjang();
				break;
			case 3:
				segitiga();
				break;
			case 4:
				lingkaran();
				break;
			default:
				cout << "pilihan tidak valid";
		}

	} while (choice != 5);
}
