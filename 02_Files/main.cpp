#include <iostream>
#include <cstdlib>

// 命名空间
// 在 C++ 中，任何未在类、函数或命名空间内定义的名称都被视为隐式定义的命名空间的一部分，称为全局命名空间（有时也称为全局范围）
// 只有声明和定义语句可以出现在全局命名空间中
// 这意味着我们可以在全局命名空间中定义变量，尽管通常应该避免这种情况
// 这也意味着其他类型的语句（例如表达式语句）不能放在全局命名空间中（全局变量的初始化器是一个例外）

// 这是一个 using 指令，它允许我们在没有命名空间前缀的情况下访问 std 命名空间中的名称
using namespace std;

int foo();

int x{};

int main()
{	// 当标识符包含命名空间前缀时，该标识符称为限定名 std::cout 推荐
	std::cout << "Hello World!" << '\n';
	// 容易与自定义的函数名冲突，不推荐
	cout << "这句话没有用命名空间前缀" << '\n';
	foo();
	return EXIT_SUCCESS;
}