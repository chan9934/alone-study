////int i = 1  -> int i -> assignment 배정 i라는 변수를 int 타입으로 배정하다 assignment, = 1 -> 변수 i를 1로 초기화 innitialization
////char a = 'A' -> A를 아스키코드를 통해 숫자로 바꾸고 그 숫자를 컴퓨터에 인식 시키기 위해 2진수로 바꾼다.
//
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	bool bValue = false;
//	cout << sizeof(bool) << endl;
//	cout << sizeof(bValue) << endl;
//
//	cout << (bValue ? 1 : 0) << endl;
//	char chValue = 'A';
//
//	cout << chValue << endl;
//	cout << (int)chValue << endl;
//
//	char  chValue1 = 65;
//	cout << chValue1 << endl;
//
//	float fValue = 3.141592f; 
//	float fValue1 = 3.141592; // f가 없으면 정밀도가 더 떨어진다. f가 있어야 float을 사용할거다 미리 말해주는거라 저 효율적
//	double dValue = 3.141592;
//
//	auto aValue = 3.141595;
//	auto aValue2 = 3.141595f;
//
//	cout << aValue << endl;
//	cout << aValue2 << endl;
//	cout << sizeof(aValue) << endl; // 8(byte)
//	cout << sizeof(aValue2) << endl; // 4(byte)
//
//	cout << fValue << endl;
//	cout << dValue << endl;
//
//	int a = 123; // copy initialzation
//	int b(3.14); // direct initizlization
//	int c{ static_cast<int>(4.5) }; // uniform initialization -> 객체지향 할때 중요하게 다룬다 -> 실수를 쓰면 에러가 나온다 -> 더 엄격하게 쓰인다.
//	//int c{ (int)4.5 }이런식으로 형변환해서 써야한다.
//
//	int k, l, m{ 123 };// 이경우는 m만 초기화 해준것
//
//	cout << m << endl;
//
//	int t{ 123 }, y{ 333 }, u{ 111 };
//	cout << t << endl;
//	cout << y << endl;
//	cout << u << endl;
//
//	return 0;
//}