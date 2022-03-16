#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream fin, fout;

fin.open("copy.txt");
fout.open("even.txt", ios::app);

char ch;
while(!fin.eof())
	{
	 fin.get(ch);
	 fout << ch;
	}
cout << "Done" << endl;

fin.close();
fout.close();

return 0;
}
