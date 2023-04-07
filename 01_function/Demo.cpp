#include <iostream>

void doPrint()
{
	std::cout << "doPrint..." << '\n';
}

int main()
{	
	std::cout << "start main()..." << '\n';
	doPrint();
	doPrint();
	std::cout << "end main()..." << '\n';
	return 0;
}
