#include<iostream>
using namespace std;
int main(){
	int f_tiktaktoe;
	
	cout << "masukan angka untuk tabel ";
	cin >> f_tiktaktoe;
	
	for (int f = 1; f<= f_tiktaktoe ; f++)
	{
		cout << "_";
	}
	cout << endl;
	for (int f = 1; f <= f_tiktaktoe ; f++)
	{
		cout << "|";
	for (int f = 1; f <= f_tiktaktoe ; f++)
	{
		cout << "_|";
	}
     	cout << endl;
	}
	return 0;
}

