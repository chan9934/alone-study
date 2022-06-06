#include <iostream>
#include <array>

using namespace std;

//int main()
//{
//	int grade[] = { 85, 65, 90 };
//	/*int len = sizeof(grade) / sizeof(grade[0]);*/
//
//	unsigned int len = size(grade);
//
//	cout << "배열 grade의 길이는 " << len << "입니다.";
//	return 0;
//}

//다차원배열
//2차원 이상으 ㅣ배열을 의미하며, 배열 요소로 또 다른 배열을 가지느 ㄴ배열을 의미한다.
//즉 2차원 배열은 배열 요소로 1차원 배열을 가지는 배열이며
//3차원은 2차원
//4차원은 3차원이다
//
//1차원 배열의 배열 요소로 또 다른 1차원 배열을 사용하여 2차원 배열을 나타낼 수 있다
//2차원 배열응ㄴ 다음과 같은 문법에 따라 선언할 수 있다
//타입 배열이름[행의길이][열의길이];
//
//타입은 배열 요소로 저장되는 변수의 타입을 설정한다
//배열 이름은 배열이 서언된 후에 배열에 접근하기 위해 사용

//int main()
//{
//	int arr1[6] = { 10, 20, 30, 40, 50, 60 };
//	int arr2[2][3] = { 10, 20,30 ,40 ,50, 60 };
//
//	cout << "arr1의 배열 요소의 값" << endl;
//	cout << arr1[0] << " ";
//	cout << arr1[1] << " ";
//	cout << arr1[2] << " ";
//	cout << arr1[3] << " ";
//	cout << arr1[4] << " ";
//	cout << arr1[5] << endl;
//
//	cout << "arr2의 배열 요소의 값" << endl;
//	cout << arr2[0][0] << " ";
//	cout << arr2[0][1] << " ";
//	cout << arr2[0][2] << " ";
//	cout << arr2[1][0] << " ";
//	cout << arr2[1][1] << " ";
//	cout << arr2[1][2];
//	
//	return 0;
//}

//배열의 선언과 동시에 초기화
//1차원과 달리 여러방식으로 초기화 가능
//
//1차원배열의 초기화 형태
//배열의 모든 요소 초기화
//배열의 일부 요소만 초기화
//일부만 초기화 할경우 나머지는 자동 초기화

//int main()
//{
//	array<int, 3> arr = { 9, 8 ,7 };
//	cout << "Array size = " << arr.size() << endl;
//	cout << "2nd element = " << arr[1] << endl;
//
//	return 0;
//}