#include<iostream>
#include<cmath>
#include <stdio.h>
using namespace std;

int a; //jedna stranica prvokutnika
int b; // druga stranica pravokutnika
float d; // tražena dijagonala

int main()
{
	cout << "molim unesite vrijednost (a) stranice" << endl;
	cin >> a;
	cout << " molim unesit vrijednost (b) stranice" << endl;
	cin >> b;
	cout << " duljina diagonale je:" << endl;
	d = hypot ( a , b );
	cout << d;
	
	system("Pause");
	return 1;

}