////논리 연산자
////논리 연산자는 주어진 논리식을 판단하여, 참(true)과 거짓(false)을 결정하는 연산자이다
////AND 연산과 OR 연산은 두 개의 피연산자를 가지는 이항 연산자이며, 피연산자들의 결합 방향은 왼쪽에서 오른쪽입니다.
////NOT 연산자는 피연산자가 단 하나뿐인 단항 연산자이며, 피연산자의 결합 방향은 오른쪽에서 왼쪽이다.
//
////&& 논리식이 모두 참이면 1을 반환함 and
////|| 논리식중에서 하나라도 참이면 1을 반환함 or
////! 논리식의 결과가 참이면 0 거짓이면 1을 반환함 논리 not 연산
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int i{ 0 };
//
//	cout << "i의 값은 ";
//	cin >> i;
//
//	{
//		if (i < 0)
//		{
//			cout << "i는 음수다.";
//		}
//
//		else if (i == 3)
//		{
//			cout << "i는 3이다.";
//		}
//
//		else
//			cout << "i는 3이 아닌 양수다." << endl;
//
//		
//	}
//
//	cout << boolalpha;
//	int bool1;
//	int bool2;
//	int x;
//
//	cin >> bool1 >> bool2 >> x;
//
//
//	bool result{ bool1 || bool2 || x > 7 || (27 / 13 & x + 1) > 10 };
//
//	cout << result << endl;
//
//
//}