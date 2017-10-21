#include <iostream>
using namespace std;

int main () {
	double luasRmh=42;
	double parket=193*1215;
	double luasBox = parket*8/1000000;
	
	cout << "Luas Rumah 	: "<<luasRmh<<" m2"<<endl;
	cout << "Luas 1 Box Parket	: "<<luasBox<<" m2"<<endl;
	
	double jumlahBox, bayarParket, bayarPasang, totalBayar;
	jumlahBox = luasRmh/luasBox;
	cout <<"jumlah Box Parket 	: "<<jumlahBox<<endl;
	
	bayarParket = jumlahBox*500;
	cout <<"Biaya Parket (Rp) 	: "<<bayarParket<<endl;
	
	bayarPasang = luasRmh*20;
	cout <<"Biaya Pasang (Rp) 	: "<<bayarPasang<<endl;
	
}
