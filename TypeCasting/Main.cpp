#include <iostream>

void PrintString(char* string)
{
	std::cout << string << "\n";
}

class A
{
public:
	virtual void Test() { }
};
class B : public A
{
public:
	//virtual void Test() {}
};

int main()
{
	const char* name = "ronnie";
	PrintString(const_cast<char*>(name));

	int number = 10;
	float floatNumber = static_cast<float>(number);

	A* a = new B();
	B* b = static_cast<B*>(a);			// 잘 알고 써야함.
	if (b)
	{
		std::cout << "b is not null\n";
	}
	B* b2 = reinterpret_cast<B*>(a);		// 위험.
	if (b2)
	{
		std::cout << "b2 is not null\n";
	}
	//B* b3 = dynamic_cast<B*>(a);
	//if (b3)
	//{
	//	std::cout << "b3 is not null\n";
	//	//B* b4 = a;
	//	//A* a2 = b3;
	//	//if (a2)
	//	//{
	//	//	std::cout << "b3 and a2 are not null\n";
	//	//}
	//}

	// 주소값 비교.
	//if (a == b)
	//{
	//
	//}

	const type_info& aInfo = typeid(a);
	const type_info& bInfo = typeid(b);
	if (aInfo == bInfo)
	{
		std::cout << "Same\n";
	}
	//std::cout << "Type of a is " << info.name() << "\n";

	delete a;
	std::cin.get();
}