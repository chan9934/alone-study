//����(Declaration)�� ����(Definition)�� �и�
#include <iostream>

using namespace std;

/*
int main()
{
	cout << add(1, 2) << endl;
	return 0;
} �����Ϸ��� ���������� ���������� �������⿡ add��� �Լ��� ���� ���� ������ �߻��Ѵ�.
*/

int add(int a, int b); // forward declaration (���� ����) ;�� ������� �Ѵ�.
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	return 0;
}

// definition (����) Ű���� ������ Ŭ������ go to definition, go to declaration�� Ȱ�� �� �� �ִ�.
int add(int a, int b) //������ Ÿ��
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}

