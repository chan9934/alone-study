//개발자의 편의를 위한 기본적인 서식 맞추기



#include <iostream>

using namespace std;

int add(int x, int y) // { return x + y; } 통일 해야한다
{
	return x + y; // indenting(빈칸 만드는 것, 맨 왼쪽 빈칸은 보통 스페이스 4번이거나 tap누르면 된다.)
	
}

int main()
{
	cout << "Hello, World" << "abfdef" <<  //이런식으로 길어지는경우 stream표시를 남기고 넘기는게 보기 좋다.
	 "Hello Home " << endl;

	int my_v		= 1;
	int x			= 4;
	int num_apples	= 123; // 이런식으로 tap을 사용하여 칸을 맞출 수 있다.

	// this is important
	int x = 1 + 2; 

	// this is important too
	int y = 3 + 4; 

	return 0;
}