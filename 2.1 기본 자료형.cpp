////int i = 1  -> int i -> assignment ���� i��� ������ int Ÿ������ �����ϴ� assignment, = 1 -> ���� i�� 1�� �ʱ�ȭ innitialization
////char a = 'A' -> A�� �ƽ�Ű�ڵ带 ���� ���ڷ� �ٲٰ� �� ���ڸ� ��ǻ�Ϳ� �ν� ��Ű�� ���� 2������ �ٲ۴�.
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
//	float fValue1 = 3.141592; // f�� ������ ���е��� �� ��������. f�� �־�� float�� ����ҰŴ� �̸� �����ִ°Ŷ� �� ȿ����
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
//	int c{ static_cast<int>(4.5) }; // uniform initialization -> ��ü���� �Ҷ� �߿��ϰ� �ٷ�� -> �Ǽ��� ���� ������ ���´� -> �� �����ϰ� ���δ�.
//	//int c{ (int)4.5 }�̷������� ����ȯ�ؼ� ����Ѵ�.
//
//	int k, l, m{ 123 };// �̰��� m�� �ʱ�ȭ ���ذ�
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