#include <iostream> // 预处理器指令 表明我们想要使用 iostream 库的内容 c++标准库的一部分 它允许我们从控制台读取文本或向控制台写入文本

using namespace std;

// 宏常量 - 通常在文件上方定义
#define DAY 7

int main() 
{
	std::cout << "Hello World !";
	std::cout << 4;
	// 常量 - const修饰的变量
	const int MONTH = 12;
	cout << "一周" << DAY << "天" << endl;
	cout << "一年" << MONTH << "月" << endl;

	// 没有初始化器（默认初始化）
	// [[maybe_unused]] 不会出现a变量未被使用的警告
	[[maybe_unused]]int a;
	// 等号后的初始化器（复制初始化）
	int b = 5;
	// 括号中的初始化器（直接初始化）
	int c(6);
	// 列表初始化方法 (C++11)
	// 大括号中的初始化器（直接列表初始化）推荐
	int d{ 7 };
	std::cout << d;
	// 等号后大括号中的初始值设定项（复制列表初始化）
	int e = { 8 };
	// 初始化为空大括号（值初始化）注：尽可能使用大括号进行初始化
	int f = {};
	std::cout << "\n Hello" << " " << "world!";
	std::cout << "e is " << e;
	// 优先使用\n 而不是std::endl
	std::cout << "Hello" << std::endl;
	std::cout << "world" << std::endl;
	int x{};
	// 输入
	std::cin >> x;
	// 输出
	std::cout << x << "\n";
	// 输入多个变量
	int y{};
	int z{};
	std::cin >> y >> z;
	std::cout << y << "and" << z;
	system("pause");
	return 0;
}