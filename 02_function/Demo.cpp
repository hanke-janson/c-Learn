#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>

int getNum()
{
	int num{};
	std::cout << "请输入一个整数：";
	std::cin >> num;
	return num;
}

int main()
{
	int num{ getNum() };
	std::cout << num << "的二倍是：" << num * 2;
	// C++标准只定义了3种状态码的含义：
	// 0、EXIT_SUCCESS、EXIT_FAILURE
	// 0 和 EXIT_SUCCESS 都表示程序执行成功
	// EXIT_FAILURE 表示程序没有成功执行
	// EXIT_SUCCESS 和 EXIT_FAILURE 是 <cstdlib> 标头中定义的预处理器宏
	// 如果想最大限度地提高可移植性，应该只使用 0 或 EXIT_SUCCESS 来指示成功终止，或者使用 EXIT_FAILURE 来指示不成功终止。
	return EXIT_SUCCESS;
}