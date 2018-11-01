#include<iostream>
using namespace std;


int a;
int b;
int zbroj;
int oduzmi;
int mnozi;
//int dijeli;

int main()
{

	cout << "molim unesite broj a" << endl;
	cin >> a;
	cout << "molim unesite broj b" << endl;
	cin >> b;

	zbroj = a + b;
	oduzmi = a - b;
	mnozi = a * b;
	//dijeli = b / a;


	cout << zbroj << endl;
	cout << oduzmi << endl;
	cout << mnozi << endl;
	//cout << dijeli << endl;

	system("pause");
}