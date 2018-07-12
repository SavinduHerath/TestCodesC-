//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//
//int factorial(int i)
//{
//	if (i < 0)
//	{
//		printf("Enter 0 or a positive integer!!!");
//	}
//	else if (i < 2)
//	{
//		return 1;
//	}
//	else { return i * factorial(i - 1); }
//}
//
//int main(int argc, char** argv)
//{
//	
//	while (true)
//	{
//		int x;
//		puts("Find the factorial of: ");
//		cin >> x;
//		if (!cin.fail())
//		{
//			printf("Factorial is: %d\n", factorial(x));
//		}
//		else
//		{
//			printf("Enter an INTEGER!!!\n");
//		}
//		cin.clear();
//		cin.ignore();
//	}
//	return 0;
//}