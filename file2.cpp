#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 fstream input;
 input.open("copy.txt");
 int count = 0;
 string str;
 //char word[30];

 if(!input)
	cout<<"File didn't open" << endl;
 else
	{
	 while(getline(input, str))
		{
		 count++;		
		}	
	}
cout<<"Total lines: " << count << endl;
input.close();

return 0;
}

