#include<iostream>
using namespace std;

class student{
	public:
	int roll = 43;
	char name = 'Amey';
};

class test{
	public:
	int m = 20;
	int s = 18;
	int h = 19;
	int g = 17;
	int d = 15;
	
	int t = (m+s+h+g+d);
	int p = t/100;
	int per = p*100;
};

class result : public student, public test{
	public:
	void disp()
	{
	cout << "Total marks are: " << t << endl;
	cout << "Percentage is: " << per << endl;
	}
};

int main()
{
 result r1;
 r1.disp();
 return 0;
}
