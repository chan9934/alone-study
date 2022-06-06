//선언(Declaration)과 정의(Definition)의 분리
#include <iostream>

using namespace std;

/*
int main()
{
	cout << add(1, 2) << endl;
	return 0;
} 컴파일러는 위에서부터 순차적으로 내려오기에 add라는 함수를 인지 못해 오류가 발생한다.
*/

int add(int a, int b); // forward declaration (전방 선언) ;를 취해줘야 한다.
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	return 0;
}

// definition (정의) 키워드 오른쪽 클릭으로 go to definition, go to declaration을 활용 할 수 있다.
int add(int a, int b) //프로토 타입
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

