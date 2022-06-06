//부동소수점 수 -> 부동 : 바다 위에 둥둥 떠다닌다.(float) 점이 둥둥 떠다니면서 숫자를 바꾼다.
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	float f{ 3.1415952 };
	double d{ 3.141592 };
	long double ld{ 3.141592 };

	cout << sizeof(float) << endl;
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<float>::min() << endl; //min은 표현 할 수 있는 가장 작은 숫자 (절댓값)
	cout << numeric_limits<float>::lowest() << endl; // 범위의 가장 낮은 숫자

	cout << sizeof(d) << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<double>::lowest() << endl;

	cout << sizeof(ld) << endl;
	cout << numeric_limits<long double>::max() << endl;
	cout << numeric_limits<long double>::min() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	float fi{ 123456789.0f }; // 10 significant digits

	cout << std::setprecision(9) << fi << endl; // 2진수로 저장하기에 오차가 생긴다. (메모리가 큰부분에서 작은부분으로 가서?)
	
	double di{ 0.1 }; // 10 significant digits

	cout << di << endl;
	cout << std::setprecision(17) << di << endl; // 부동소수점 표현 방법을 사용해서 2진수 변환 후 ㅂ표현할 수 있는 0.1의 가장 가까운 값

	
	cout <<std::setprecision(16)  << 1.0 / 3.0 << endl; // #include <iomanip>

	double ddd{ 0.222f };

	cout << sizeof(double) << endl;
	cout << sizeof(ddd) << endl; //double ddd{ 0.222f } ddd는 double이다.

	cout << sizeof(0.222f) << endl;

	double d1{ 1.0 };
	double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	cout << setprecision(17);

	cout << d1 << endl;
	cout << d2 << endl; // 컴퓨터가 만능은 아니다.

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl; //infinite
	cout << neginf << endl;
	cout << nan << endl; //nan(ind) 
	
	cout << posinf << " " << std::isnan(posinf) << endl; // cmath
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl; 
	cout << 1.0 << " " << std::isnan(1.0) << endl;

	cout << posinf << " " << std::isinf(posinf) << endl; // cmath
	// isnan이냐 nan isinf냐 inf냐 

	cout << posinf / posinf << endl;
	cout << neginf / neginf << endl;
	cout << posinf * posinf << endl;



	
	return 0;
}