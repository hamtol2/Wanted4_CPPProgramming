#include <iostream>

class Point
{
public:
	Point(int x = 0, int y = 0)
		: x(x), y(y)
	{
	}

	// µ¡¼À.
	//Point Add(const Point& other)
	//{
	//	return Point(x + other.x, y + other.y);
	//}

	friend Point Add(const Point& left, const Point& right)
	{
		return Point(left.x + right.x, left.y + right.y);
	}

	//Point operator+(const Point& other)
	//{
	//	return Point(x + other.x, y + other.y);
	//}

	friend Point operator+(const Point& left, const Point& right)
	{
		return Point(left.x + right.x, left.y + right.y);
	}

	int operator[](int index)
	{
		return array[index];
	}

	int GetValueWithIndex(int index)
	{
		return array[index];
	}

	friend std::ostream& operator<<(
		std::ostream& os, const Point& point)
	{
		return os << "(" << point.x << "," << point.y << ")\n";
	}

public:
	int x = 0;
	int y = 0;
	int array[100] = {};
};

//Point Add(const Point& left, const Point& right)
//{
//	return Point(left.x + right.x, left.y + right.y);
//}

//std::istream&
//std::ostream& operator<<(std::ostream& os, const Point& point)
//{
//	return os << "(" << point.x << "," << point.y << ")\n";
//}

int main()
{
	Point p1(1, 1);
	Point p2(5, 5);

	//Point p3 = p1.Add(p2);
	//Point p3 = p1 + p2;
	//Point p3 = Add(p1, p2);
	Point p3 = p1 + p2;
	//int number = p3.GetValueWithIndex(3);
	//int number = p3[3];

	//std::cout << "(" << p3.x << "," << p3.y << ")" << "\n";
	std::cout << p3 << "\n";
	std::cout.operator<<(10).operator<<(20);

	//Point p3(p1.x + p2.x, p1.y + p2.y);
	std::cin.get();
}