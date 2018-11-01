// Napraviti program koji prima korisnikov input.
// Te ispisati u konzoli toliko stepenica koliki je korisnikov input u obliku broja 1



#include<iostream>
using namespace std;

int lines;

void write(int lines)
{
		if (lines <= 0)
		{
			return;
		}
		else
		{
			cout << " 1 ";
			write(lines - 1);
		}
}

int main()
{
	cout << "Plese input number of lines : " << endl;
	cin >> lines;

	for (int i = 0; i <= lines ; i++)
	{
		cout << endl;
		write(i);
	}



	system("pause");
}