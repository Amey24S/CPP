#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 fstream myfile;
 myfile.open("copy.txt", ios::in);
 
 if(!myfile)
	cout<< "Can't open" << endl;
 else
 cout << myfile.good() << endl;
 cout << myfile.bad() << endl;

 myfile.close();
 return 0;
}
