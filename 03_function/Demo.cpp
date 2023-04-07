#include <cstdlib>
#include <iostream>

void printValue(int x)
{
	std::cout << x;
}

int main()
{
	int x{};
	std::cout << "请输入一个整数：";
	std::cin >> x;
	printValue(x);
	return EXIT_SUCCESS;
}