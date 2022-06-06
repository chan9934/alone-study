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

	cout << boolalpha; // 출력에 true false로 나오기 위해 noboolalpha도 사용 가능

	cout << b3 << endl;
	cout << b1 << endl;
	cout << !true << endl;
	cout << !false << endl;
	cout << !b3 << endl;
	cout << !b1 << endl;
	cout << (true && true) << endl; // and && 두개씩
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;
	cout << (true || true) << endl; // or || 두개씩
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
		cout << "This is true " << endl; // 실행 안됨
	}

	else
	{
		cout << "this is false " << endl; // 아니면 이게 실행
	}


	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	if (5) // 0제외 다 true 0은 false
	{
		cout << "true" << endl;
	}
	else
		cout << "false " << endl;

	bool c;

	cin >> c; // bool 입력은 1 or 0으로 넣어야 한다.
	cout << "your input : " << c << endl;






	return 0;
}
*/