#include<iostream>
using namespace std;

void leapYears(int a, int b)
{
	int startPoint;
	int endPoint;
	
	if (a < b)
	{
		startPoint = a;
		endPoint = b;
	}
	else if (a > b)
	{
		startPoint = b;
		endPoint = a;
	}
	else
	{
		cout << "years are equal" << endl;
		return;
	}
	while ((startPoint % 4) != 0)
	{
		startPoint++;
	}
	if (startPoint > endPoint)
	{
		cout << " there are no leap years in given range" << endl;
		return;
	}
	for (int i = startPoint; i <= endPoint; i += 4)
	{
		cout << "leap years are : \n" << i << ", ";
	}
	system("pause");
}

int main()
{
	int a;
	int b;

	cout << "input first year : \n" << endl;
	cin >> a;
	cout << "input last year : \n" << endl;
	cin >> b;
	leapYears(a,b);

	system("pause");

}


