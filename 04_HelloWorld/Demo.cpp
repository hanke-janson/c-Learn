/*
	first program
*/
#include <iostream>

int main()
{
	std::cout << "������һ�������� " << '\n';
	int x{};
	std::cin >> x;
	int doubleX{ x * 2 };
	int tripleX{ x * 3 };
	std::cout << "�����ֵ�2��Ϊ��" << doubleX << '\n';
	std::cout << "�����ֵ�3��Ϊ��" << tripleX;
	return 0;
}