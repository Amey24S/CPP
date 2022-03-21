#include<iostream>
using namespace std;

class test{
	int x;
	public:
	void read() 
	{
	cout<<"Enter num: "<<endl;
	cin>>x;
	}
	class EVEN{};
	class ODD{};
	void check()
	{
	if(x%2==0)
		throw EVEN();
	else
		throw ODD();	
	}
};

int main()
{
test t;
t.read();

try{
t.check();
}

catch(test::EVEN)
{
cout<<"EVEN"<<endl;
}	
catch(test::ODD)
{
cout<<"ODD"<<endl;
}
return 0;
}
