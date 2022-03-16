#include<iostream>
using namespace std;

class base{
	public:
	virtual void show()
	{cout << "Base" << endl; }
};

class dev1 : public base
{
	public:\
	void show()
	{ cout <<"Dev1" << endl; }
};

class dev2 : public base
{
	public:\
	void show()
	{ cout <<"Dev2" << endl; }
};

int main()
{
dev1 d1;
dev2 d2;
base* ptr;

ptr = &d1;
ptr->show();

ptr = &d2;
ptr->show();

return 0;
}
