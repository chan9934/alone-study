//#include <iostream>
//#include <cmath> // ������ ����ϱ� ����
//#include <limits> // �����Ϸ����� short Ÿ���� ǥ���� �� �ִ� ���ڰ� ����� ����� ����
//
//int main()
//{
//	using namespace std;
//	
//	short		s = 1; // 2 bytes = 2 * 8 bits = 16 bits 2^16
//	int			i = 1;
//	long		l = 1;
//	long long	ll = 1;
//
//	cout << sizeof(short) << endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(long long) << endl;
//
//	cout << pow(2, sizeof(short) * 8 - 1) -1 << endl; // 1�� ���� ������ ��ȣ�� ǥ���ϴ� �ڸ��� �ֱ� ������, 0�� ǥ���ϴ°͵�
//
//	cout << numeric_limits<short>::max() << endl;
//	cout << numeric_limits<short>::min() << endl;
//	cout << numeric_limits<short>::lowest() << endl;
//
//	s = 32767;
//	s += 1;
//	
//	cout << "32768? " << s << endl; // overflow
//
//	s = std::numeric_limits<short>::min();
//
//	cout << "min() = " << s << endl;
//
//	s = s -= 1;
//	cout << " " << s << endl; // overflow
//
//	unsigned int itest = -1;
//
//	cout << itest << endl;
//
//	itest = std::numeric_limits<int>::min();
//
//	cout << itest << endl;
//
//	int aaa = 22 / 4;
//
//	cout << aaa << endl;
//
//	cout << 22 / 4 << endl;
//	cout << static_cast<float>( 22 / 4 ) << endl;
//	cout << static_cast<float>(22) / static_cast<float>(4) << endl;
//
//
//
//	return 0;
//}