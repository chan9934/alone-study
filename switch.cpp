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
////		cout << "Black" << endl;*/// ����
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
//	//	switch (x) // switch case (break)�� ��Ʈ break�� ���ٸ� �������鵵 �� ���´�.
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
//		// int b = 5;  ������ �� �Ǵµ� �޸� ������ ���� �����ϴ°� �ȵȴ�.
//
//	case 0:
//	{
//		a = 1; //������ case���� ����
//		cout << a << endl;
//
//		break;
//	} //�׳� �̷��� ��ȣ�� ����� �ش� case���� �ش�ǰ� �ϴ°� �� ���ҵ�
//
//		case 1:
//			int y //������ �ϴ°� switch ���ȣ���� �ϴ� �Ͱ� ���� ���ҷ� ���� �ش� case���� �������� �� �ش� �ȴ�
//			y = 5;// ������ ������ �ش� case �ȿ����� ��밡���ϴ�.
//			
//			break;
//			 
//		case 2:
//			
//			cout << y << endl;
//			break;
//			// �򰥸��Ƿ� �׳� ��ü ���ȣ �ȿ� ����
//		default:
//			cout << "Undefined input " << x << endl;
//			break; //break�� �� �ʿ��Ѱ� �ƴ�
//			// �ش� �ȵǴ°� �̷������� ����
//		
//
//	}
//	return 0;
//}