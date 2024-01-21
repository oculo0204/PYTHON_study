#include <iostream>
using namespace std;

class Circle
{
public:
	double radius; //������ �ʵ�

	Circle() //������ �Լ�
	{
		radius = 1;
	}
	Circle(double newRadius) //������ �Լ��� �̸��� Ŭ������ ���ƾ� �ϴ°�?
	{
		radius = newRadius;
	}

	double getArea() {
		return radius * radius * 3.141592;
	}
};

int main() {
	Circle circle1(1.0);
	Circle circle2(25); //�ݿø��Ǵ� ������ �𸣰���
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