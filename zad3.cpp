#include <iostream>

int main()
{
	int a;
	int b;

	std::cout << "Enter first number, a: ";
	std::cin >> a;

	std::cout << "Enter second number, b: ";
	std::cin >> b;

	int c = a / b;
	std::cout << "The result of 'a' divided by 'b' is " << c << ".";

	system("pause");
	return 1;
}