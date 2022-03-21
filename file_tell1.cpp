#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 fstream fp; char buf[100]; int pos;
 
 fp.open("hello.txt", ios::out|ios::ate);
 cout<<"Writing to the file"<<endl;
 fp<<"Line one"<<endl;
 fp<<"Line two"<<endl;
 pos = fp.tellp();
 cout<< "current position:"<<pos<<endl;
 
 fp.seekp(-7, ios::cur);
 fp<<endl<<"random data";
 fp.seekp(7, ios::beg);

 fp<<"hello world";
 fp.close();
 cout<<"Done writing"<<endl;

 fp.open("hello.txt");
 cout<<"Reading"<<endl;
 fp.seekg(0);
 
 while(fp.getline(buf, 100))
	cout<<buf<<endl;
 pos = fp.tellg();
 cout<<"pos pointer is at: "<<pos<<endl;

return 0;
}
