#include <iostream>
#include <functional>

class Operator
{
public:
	int Add(int a, int b)
	{
		return a + b;
	}
};

//typedef int (*Adder)(int a, int b);
using Adder = int (*)(int a, int b);
//using ClassAdder = int (Operator::*)(int a, int b);
typedef int (Operator::*ClassAdder)(int a, int b);
//using Adder = std::function<int(int, int)>;

// 반환형이 int이고, 파라미터를 안받는 함수.
int Function(int a, int b, Adder adder)
//int Function(int a, int b, std::function<int(int, int)> adder)
{
	return adder(a, b);
}

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	// 함수 포인터 선언.
	//int (*FunctionPointer)();
	//FunctionPointer = Function;

	// 함수 포인터를 통한 간접 호출.
	Operator oper;
	//oper.Add()
	//ClassAdder adder = &Operator::Add;
	std::cout << Function(10, 20, Add) << "\n";

	std::cin.get();
}