#include<iostream>
using namespace std;

class Base{};

class derived : public Base{};

int main()
{
try{
	throw Base();
}
catch(derived d){
	cout<<"Derived object caught"<<endl;
}
catch(Base b){
	cout << "Base object caught"<<endl;
}

return 0;
}
