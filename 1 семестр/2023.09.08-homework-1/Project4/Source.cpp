#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	std::cin >> k;
	int l = 9 - k;// ��������� ����� �������� �����
	std::cout << 100 * k + 90 + l;
	return EXIT_SUCCESS;
}