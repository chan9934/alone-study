//1차원 배열
//배열이란
//배열은 같은 타입의 변수들로 이루어진 유한 집합으로 정의 할 수 있습니다.
//배열을 구성ㅇ하는 각각의 값을 배열요소라고 하며, 배열에서의 위치를 가리키는 숫자를 인덱스라고합니다.
//c++에서 인덱스는 언제나 0부터 시작하며, 0을 포함한 양의 정수만을 가질 수 있습니다.
//배열은 같은 종류의 데이터를 많이 다뤄야하는 경우에 사용할수 있는 가장 기본적인 자료 구조입니다
//배열은 선언되는 형식에 따라 1차원 배열 2차원 배열뿐 아니라 그 이상으 ㅣ다차원 배열로도 선언
//벗현실적으로 잉해하기가 쉬운 2차원까지 많이 사용된다
//1차원 배열은 가장 기본적인 배열로 다음과 같은 문법에 따라 선언합니다
//타입 배열이름[배열길이]
//
//타입은 배열 요소로 들어가는 변수의 타입을 ㄹ명시합니다
//배열 이름은 배열이 선언된 후에 배열에 접근하기 위해 사용됩니다
//배열으 ㅣ길이는 해당 배열이 몇개의 배열 요소를 가지게 되는지 명시합니다
//열은 선언만 하고 초기화 하지 않으면, 모든 배열 요소가 쓰레깃값으로 채워집니다

#include <iostream>

using namespace std;

//int main()
//{
//	int sum = 0;
//	int grade[3]; // 길이가 3인 int 형 배열 선언
//
//
//	grade[0] = 85;
//	grade[1] = 65;
//	grade[2] = 90;
//
//	for (int i = 0; i < 3; i++)
//	{
//		sum += grade[i];
//	}
//
//	cout << "국영수 과목 총 접수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum / 3 << "점입니다.";
//
//	return 0;
//}
////

//배열의 선언과 동시에 초기화 하는 방법
//C++에서는 변수와 마찬가지로 배열도 선언과 동시에 초기화 할 수 있습니다.
//다음과 같이 괄호({})를 사용하여 초깃값을 나열한 것을 초기화 리스트라고 합니다
//타입 배열이름[배열길이] = { 배열요소1, ㅂ열요소2, ..... }
//단, 초기화 리스트의 타입과 배열의 타입은 반드시 일치해야 합니다.
//만약 초기화 리스트의 개수가 배열의 총 길이보다 적으면, 배열의 앞에서부터 차례대로 초기화 될 것이빈다.
//이때 초기화되지 못한 나머지 배열 요소는 모두 0으로 초기화 됩니다
//초기화 리스트의 개수가 배열의 길이보다 많을 경우에는 아래 배열의 특징에서 따로
//
//하지만 초기화 리스트를 이용한 초기화 방식은 반드시 배열의 선언과 함께 정의되어야 합니다
//배열이 먼저 선언된 후에는 이 방식으로 배열의 요소를 초기화 할 수 없습니다.

//int main()
//{
//	int sum = 0;
//	int grade[3] = { 85, 65 , 90 }; // 길이가 3인 int형 배열의 선언과 동시에 초기화
//
//	for (int i = 0; i < 3; i)
//}

//배열의 길이 자동 설정
//C++에서는 초기화 리스트에 맞춰 자동으로 배열의 길이를 설정할 수도 있습니다
//타입 배열이름[] = { 배열요소1, 배열요소2, ... }
//
//ㅂ열의 길이를 다로 입력하지 않은 배열은 초기화 리스트의 배열 요소 개수에 맞춰 자동으로 배열의 길이가 설정된다
//int arr[] = { 1, 2, 3 };
//

//배열으 ㅣ특징
//배열의 길이를 선언할 때에는 반드시 상수 사용
//배열 요소의 인덱스는 언제나 0부터 시작한다
//C++ 컴파일러는 배열으 ㅣ길이를 전혀 신경 쓰지 않는다.
//
//int main()
//{
//	double sum = 0;
//	int grade[3] = { 85, 65, 90 };
//	grade[3] = 100;
//
//	for (int i = 0; i < 4; i++)
//	{
//		sum += grade[i];
//	}
//
//	cout << "국영수 과목 총 접수 합계는 " << sum << "점이고, 평균 점수는 " << um / 3 << "점입니다.";
//
//	return 0;
//}
//
//배열이 차지하는 메모리 크기
//배열이 차지하는 총 메모리의 크기 = 배열의 길이 x sizeof(타입)
//
////배열의 길이 = sizeof(배열의이름)/ sizeof(배열이름[])
//
//int main()
//{
//	int grade[] = { 85, 65, 90 };
//	int len = sizeof(grade) / sizeof(grade[0]);
//
//	cout << "배열 grade의 길이는 " << len << "입니다.";
//	return 0;
//}