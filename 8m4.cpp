#include<iostream>
using namespace std;
class base{
	int i;
	public:
	base()
	{
	cout << "Base default constructor" << endl;	
	}
};

class derived : private base 
{
int k;
public:
derived()
{
 cout << "Derived constructor" << endl;
}
derived(int i)
{
 cout << "Derived Parameterized" << endl;
}
};

int main()
{
 base b;
 derived d1;
 derived d2(10);
 //derived ob (3);
 //ob.set(1, 2);
 //ob.show();
return 0;
}
