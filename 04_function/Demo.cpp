#include <cstdlib>
#include <iostream>
// 函数声明
int add(int x, int y);

int main()
{
	int x{};
	int y{};
	std::cout << "输出 x:";
	std::cin >> x;
	std::cout << "输入 y:";
	std::cin >> y;
	int result{ add(x, y) };
	std::cout << x << " + " << y << " = " << result;
	return EXIT_SUCCESS;
}

int add(int x, int y)
{
	return x + y;
}