/*
	first program
*/
#include <iostream>

int main()
{
	std::cout << "请输入一个整数： " << '\n';
	int x{};
	std::cin >> x;
	int doubleX{ x * 2 };
	int tripleX{ x * 3 };
	std::cout << "此数字的2倍为：" << doubleX << '\n';
	std::cout << "此数字的3倍为：" << tripleX;
	return 0;
}