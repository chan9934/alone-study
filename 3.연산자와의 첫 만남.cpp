// ���ͷ�, �ǿ�����, ����, ����, ����

#include <iostream>

using namespace std;

int main()
{
	int x = -2; // x�� ����, 2 �� ���ͷ�

	cout << 1 + 2 << endl; // 1,2�� ���ͷ� 1 + 2�� ǥ���� +�� ������ 

	int y = (x > 0) ? 1 : 2;

	cout << y << endl;

	cout << "Hello World" << endl;

	return 0;
}

// -x ���� ������ 1 + 2 ���� ������
// 3�� ������ int y = ( x > 0 ) ? 1 : 2;         x�� 0���� ū�� ���̸� ���ʿ� �ִ� 1�� ����Ѵ�.