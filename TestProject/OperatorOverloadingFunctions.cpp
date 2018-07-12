////Operator Overloading using non-member functions
//
//#include <cstdio>
//
//using namespace std;
//
//class MyClass
//{
//	int MyInteger;
//
//public:
//	MyClass(int a) : MyInteger(a) {}
//	int GetMyInteger() { return MyInteger; }
//};
//
////The non-member function which overloads the operator + for class MyClass
//int operator + (MyClass lhs, MyClass rhs)
//{
//	puts("This is Operator overloading function");
//	return lhs.GetMyInteger() + rhs.GetMyInteger();
//}
//
//int main(int argc, char** argv)
//{
//	MyClass MyObject1(4);
//	MyClass MyObject2(3);
//	MyClass MyObject3(5);
//
//	printf("Result from adding MyObjects: %d\n", MyObject1 + MyObject2+MyObject3);
//	return  0;
//}
//
