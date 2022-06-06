//#include <iostream>
//
//using namespace std;
//
////enum class Colors
////{
////	BLACK,
////	WHITE,
////	RED,
////	GREEN,
////	BLUE
////
////};
////
////void printColorName(Colors color)
////{
////	
////	/*if (color ++ Colors::Black)
////		cout << "Black" << endl;
////	else if (color ++ Colors::WHIte)
////		cout << "Black" << endl;*/// 귀찮
////	/*switch (color)
////	{
////	case Colors::BLACK :
////		cout << "Black" << endl;
////		break;
////	}*/
////	switch (static_cast<int>(color))
////	{
////	case 0 :
////		cout << "Black" << endl;
////		break;
////	case 1 :
////		cout << "White" << endl;
////		break;
////	}
////
////}
//
//int main()
//{
//	/*printColorName(Colors::WHITE);*/
//
//	//int x;
//	//cin >> x;
//	//{
//	//	switch (x) // switch case (break)는 세트 break가 없다면 나며지들도 다 나온다.
//	//	{
//	//	case 0:
//	//		cout << "Zero";
//	//		break;
//	//	case 1:
//	//		cout << "One";
//	//		break;
//	//	case 2:
//	//		cout << "Two";
//	//		break;
//	//	}
//
//	//	cout << endl;
//	//}
//
//	int x;
//	cin >> x;
//
//	switch (x)
//	{
//		int a;
//		// int b = 5;  선언은 잘 되는데 메모리 때문에 값을 대입하는건 안된다.
//
//	case 0:
//	{
//		a = 1; //대입은 case에서 가능
//		cout << a << endl;
//
//		break;
//	} //그냥 이렇게 괄호를 만들어 해당 case에만 해당되게 하는게 맘 편할듯
//
//		case 1:
//			int y //선언을 하는건 switch 대괄호에서 하는 것과 같은 역할로 다음 해당 case부터 다음까지 다 해당 된다
//			y = 5;// 하지만 대입은 해당 case 안에서만 사용가능하다.
//			
//			break;
//			 
//		case 2:
//			
//			cout << y << endl;
//			break;
//			// 헷갈리므로 그냥 전체 대괄호 안에 넣자
//		default:
//			cout << "Undefined input " << x << endl;
//			break; //break가 꼭 필요한건 아님
//			// 해당 안되는건 이런식으로 정리
//		
//
//	}
//	return 0;
//}