#include <cstdlib>
#include <iostream>

void printValue(int x)
{
	std::cout << x;
}

int main()
{
	int x{};
	std::cout << "������һ��������";
	std::cin >> x;
	printValue(x);
	return EXIT_SUCCESS;
}