#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int f = abs(n - 1) + 1; //��� ���������� ������ ����������, �������� ������� �� ������
	int c = ((1 + n) * f) / 2;
	std::cout << c;
	return EXIT_SUCCESS;
}