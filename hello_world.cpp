#include <iostream>

int add (int x, int y);

int main()
{
	int a = 5;

	std::cout << "Hello, World!\n";
	std::cout << "a = " << a << '\n';

	return 0;
}

int add (int x, int y)
{
	return x + y;
}
