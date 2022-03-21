#include<iostream>
using namespace std;

int main()
{
float n1,n2,division;
int e;

cout<<"Enter n1: "<<endl;
cin>>n1;

cout<<"Enter n2: "<<endl;
cin>>n2;

try{
	if(n2!=n1)
	{
	 division = (float)n1/n2;
	 if(division<=0)
	 	throw e;	
	 cout<<"n1/n2="<<division<<endl;
	}
	else
	 throw n2;
}

catch(int e)
{
 cout << "Exception: Division by zero"<<endl;
}
catch(char st)
{
 cout<<"Division less than 1"<<endl;
}
catch(...)
{
cout<<"Unknown"<<endl;
}

return 0;
}

