#include <iostream> // Ԥ������ָ�� ����������Ҫʹ�� iostream ������� c++��׼���һ���� ���������Ǵӿ���̨��ȡ�ı��������̨д���ı�

using namespace std;

// �곣�� - ͨ�����ļ��Ϸ�����
#define DAY 7

int main() 
{
	std::cout << "Hello World !";
	std::cout << 4;
	// ���� - const���εı���
	const int MONTH = 12;
	cout << "һ��" << DAY << "��" << endl;
	cout << "һ��" << MONTH << "��" << endl;

	// û�г�ʼ������Ĭ�ϳ�ʼ����
	// [[maybe_unused]] �������a����δ��ʹ�õľ���
	[[maybe_unused]]int a;
	// �Ⱥź�ĳ�ʼ���������Ƴ�ʼ����
	int b = 5;
	// �����еĳ�ʼ������ֱ�ӳ�ʼ����
	int c(6);
	// �б��ʼ������ (C++11)
	// �������еĳ�ʼ������ֱ���б��ʼ�����Ƽ�
	int d{ 7 };
	std::cout << d;
	// �Ⱥź�������еĳ�ʼֵ�趨������б��ʼ����
	int e = { 8 };
	// ��ʼ��Ϊ�մ����ţ�ֵ��ʼ����ע��������ʹ�ô����Ž��г�ʼ��
	int f = {};
	std::cout << "\n Hello" << " " << "world!";
	std::cout << "e is " << e;
	// ����ʹ��\n ������std::endl
	std::cout << "Hello" << std::endl;
	std::cout << "world" << std::endl;
	int x{};
	// ����
	std::cin >> x;
	// ���
	std::cout << x << "\n";
	// ����������
	int y{};
	int z{};
	std::cin >> y >> z;
	std::cout << y << "and" << z;
	system("pause");
	return 0;
}