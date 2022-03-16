#include<iostream>
#include<fstream>
using namespace std;

class student{
	int roll; char name[25]; float marks;
	void getdata()
	{
	 cout<< "Enter roll no & name"<<endl;
	 cin>>roll>>name;
	 cout<<"Marks"<<endl;
	 cin>>marks;	
	}
public: void Addrecord()
	{
	 fstream f; student stu;
	 f.open("even.txt", ios::app | ios::binary);
	 stu.getdata();
	 f.write((char *)&stu, sizeof(stu));
	 f.close();	
	}
};

int main()
{
 student s;
 char ch = 'n';
 do
	{
	 s.Addrecord();
	 cout << "Want to add more? (y/n)"<< endl;
	 cin>>ch;	
	} while (ch == 'y' || ch == 'Y');
	cout << "Updated" << endl; 
}
