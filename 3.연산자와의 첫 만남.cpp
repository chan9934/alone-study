// 리터럴, 피연산자, 단항, 이항, 삼항

#include <iostream>

using namespace std;

int main()
{
	int x = -2; // x는 변수, 2 는 리터럴

	cout << 1 + 2 << endl; // 1,2는 리터럴 1 + 2는 표현식 +는 연산자 

	int y = (x > 0) ? 1 : 2;

	cout << y << endl;

	cout << "Hello World" << endl;

	return 0;
}

// -x 단항 연산자 1 + 2 이항 연산자
// 3항 연산자 int y = ( x > 0 ) ? 1 : 2;         x가 0보다 큰게 참이면 왼쪽에 있는 1을 출력한다.