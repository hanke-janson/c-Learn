#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>

int getNum()
{
	int num{};
	std::cout << "������һ��������";
	std::cin >> num;
	return num;
}

int main()
{
	int num{ getNum() };
	std::cout << num << "�Ķ����ǣ�" << num * 2;
	// C++��׼ֻ������3��״̬��ĺ��壺
	// 0��EXIT_SUCCESS��EXIT_FAILURE
	// 0 �� EXIT_SUCCESS ����ʾ����ִ�гɹ�
	// EXIT_FAILURE ��ʾ����û�гɹ�ִ��
	// EXIT_SUCCESS �� EXIT_FAILURE �� <cstdlib> ��ͷ�ж����Ԥ��������
	// ���������޶ȵ���߿���ֲ�ԣ�Ӧ��ֻʹ�� 0 �� EXIT_SUCCESS ��ָʾ�ɹ���ֹ������ʹ�� EXIT_FAILURE ��ָʾ���ɹ���ֹ��
	return EXIT_SUCCESS;
}