#include<iostream>
using namespace std;

int main()
{
int n1,n2,result;

cout<<"Enter n1: "<<endl;
cin>>n1;

cout<<"Enter n2: "<<endl;
cin>>n2;

try{
	if(n2==0)
		throw n2;
	else{
		result = n1/n2;
		cout<<"Result: "<<result<<endl;
	}
}
catch(int x){
	cout<<"Can't divide by: "<<x<<endl;
}

cout<<"EOP"<<endl;
}
