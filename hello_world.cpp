#include <iostream>

int multiply(int x, int y);
int add(int x, int y);

int main()
{
	int a = 5;

	std::cout << "Hello, World!\n";
	std::cout << "a = " << a << '\n';

	return 0;
}

int multiply(int x, int y)
{
	return x * y;
}

int add(int x, int y)
{
	return x + y;
}
