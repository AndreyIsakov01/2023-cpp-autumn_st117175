#include <iostream>
int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k;//����������� ���������(��� � ���-�� ������ �� ��� � �������������� ���-�� ������ ���� ������)
	std::cin >> m;//����� ������� � ����� �������
	std::cin >> n;//���-�� ������
	if (n >= k) {
		int st = 2 * n; //���-�� ���� ������ ������, ������� ����� ��������
		if (st >= k) {
			if (st % k == 0) {
				std::cout << st / k * m;
			}
			else if (st % k != 0) {
				std::cout << st / k * m + m;
			}
		}
	}
	else if (n < k) {
		std::cout << 2 * m;
	}
	return EXIT_SUCCESS;
}