#include <cstdlib>
#include <iostream>
// ��������
int add(int x, int y);

int main()
{
	int x{};
	int y{};
	std::cout << "��� x:";
	std::cin >> x;
	std::cout << "���� y:";
	std::cin >> y;
	int result{ add(x, y) };
	std::cout << x << " + " << y << " = " << result;
	return EXIT_SUCCESS;
}

int add(int x, int y)
{
	return x + y;
}