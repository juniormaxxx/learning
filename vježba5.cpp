// program koji izra�unava koliko se paketa mo�e napraviti prema une�enim koli�inama artikala!
//paket se sastoji od : 1 zec, 5 jaja i 3 pilica !!

#include<iostream>
using namespace std;

int rabbit;  // broj �okoladnih ze�eva
int chick;  //broj �okoladnih pili�a
int egg;   // broj �okoladnih jaja


int main()
{
	cout << "Please input the number of chocolate rabbits in warehouse : \n" << endl;
	cin >> rabbit;
	if (rabbit < 1)
	{
		cout << "package can not be made!" << endl;
		return 0;
	}
	int rabpac = rabbit / 1;

	cout << " Please input the number of chocolate chicken in warehouse : \n" << endl;
	cin >> chick;
	if (chick < 3)
	{
		cout << "package can not be made!" << endl;
		return 0;
	}
	int chipac = chick / 3;

	cout << "Please input the number of chocolate eggs  in warehouse : \n" << endl;
	cin >> egg;
	if (egg < 5)
	{
		cout << "package can not be made!" << endl;
		return 0;
	}
	int eggpac = egg / 5;

	cout << "The number of packages you can create with given warehouse inventory is: \n";
	int min = rabpac;
	if (min > chipac)
	{
		min = chipac;
	}
	if (min > eggpac)
	{
		min = eggpac;
	}

	cout << min << endl;
	system("pause");

}