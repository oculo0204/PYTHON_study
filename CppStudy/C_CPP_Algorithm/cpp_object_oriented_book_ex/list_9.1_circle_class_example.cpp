#include <iostream>
using namespace std;

class Circle
{
public:
	double radius; //데이터 필드

	Circle() //생성자 함수
	{
		radius = 1;
	}
	Circle(double newRadius) //생성자 함수의 이름은 클래스와 같아야 하는가?
	{
		radius = newRadius;
	}

	double getArea() {
		return radius * radius * 3.141592;
	}
};

int main() {
	Circle circle1(1.0);
	Circle circle2(25); //반올림되는 이유를 모르겠음
	Circle circle3(125);

	cout << "The area of the circle of radius" << circle1.radius 
		<< "is" << circle1.getArea() << endl;
	cout << "The area of the circle of radius" << circle2.radius 
		<< "is" << circle2.getArea() << endl;
	cout << "The area of the circle of radius" << circle3.radius 
		<< "is" << circle3.getArea() << endl;

	circle2.radius = 100;

	cout << "The area of the circle of radius" << circle2.radius 
		<< "is" << circle2.getArea() << endl;
}