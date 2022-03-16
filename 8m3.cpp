#include<iostream>
using namespace std;

class ABC{
	public:
	void display()
	{
	 cout<<"Parent class"<<endl;	
	}
};

class XYZ : public ABC
{
	public:
	void display()
	{
	 cout << "Child class" << endl;	
	}
};

int main()
{
XYZ x;
//a.m_protmemb;
//a.setProtMemb(0);
//a.display();
//a.Protfunc();
//x.setProtMemb();
x.display();
//x.Protfunc();

return 0;
}
