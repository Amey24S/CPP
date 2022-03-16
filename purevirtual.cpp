#include<iostream>
using namespace std;

class shape{
	protected:
	float x;
	public:
	void getd() {cin>>x;}
	virtual float calarea() = 0;
};

class square : public shape
{
	public:
	float calarea() {return x*x;}
};

class circle : public shape
{
	public:
	float calarea() {return 3.14*x*x;}
};

int main()
{
square s1;
circle c1;

cout<<"Lenght of square: ";
s1.getd();
cout << "Area: " << s1.calarea() << endl;

cout<<"Radius of circle: ";
c1.getd();
cout << "Area: " << c1.calarea() << endl;

return 0;
}
