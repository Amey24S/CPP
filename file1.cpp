#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 ifstream input; string str;
 input.open("copy.txt");
 if(!input)
	cout<<"File didn't open" << endl;
 else
	{
	 while(input>>str)
		{
		 cout << str << " "<<endl;		
		}	
	}
return 0;
}

