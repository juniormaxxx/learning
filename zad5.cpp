#include<iostream>
using namespace std;

int main()
{
	int sat;
	int min;
	int sat_1;
	int min_2;

	cout << "po�etak filma : \n sat:" << endl;
	cin >> sat;
	cout << "minuta :" << endl;
	cin >> min;
	cout << "film je poceo u \n" << sat << ":" << min << endl;

	cout << "svr�etak filma : \n sat:" << endl;
	cin >> sat_1;
	cout << "minuta :" << endl;
	cin >> min_2;
	cout << "film je zavr�io u \n" << sat_1 << ":" << min_2 << endl;



	system("pause");
	return 0;
}