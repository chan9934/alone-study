/*
#include <iostream>
#include "employeestruct.h"

using namespace std;

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	bool b1 = true; // copy initializion
	bool b2(false); // direct '''
	bool b3{ true }; // uniform ini 
	b3 = false;

	cout << boolalpha; // ��¿� true false�� ������ ���� noboolalpha�� ��� ����

	cout << b3 << endl;
	cout << b1 << endl;
	cout << !true << endl;
	cout << !false << endl;
	cout << !b3 << endl;
	cout << !b1 << endl;
	cout << (true && true) << endl; // and && �ΰ���
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;
	cout << (true || true) << endl; // or || �ΰ���
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;
	cout << !(false || false) << endl;

	if (true)
	{
	
		cout << "This is true " << endl;
		cout << "True second line " << endl;
	}

	if (false)
	{
		cout << "This is true " << endl; // ���� �ȵ�
	}

	else
	{
		cout << "this is false " << endl; // �ƴϸ� �̰� ����
	}


	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	if (5) // 0���� �� true 0�� false
	{
		cout << "true" << endl;
	}
	else
		cout << "false " << endl;

	bool c;

	cin >> c; // bool �Է��� 1 or 0���� �־�� �Ѵ�.
	cout << "your input : " << c << endl;






	return 0;
}
*/