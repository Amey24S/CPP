/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

class book
{
private:
	int num;
	char title[20];
	float price;
	float total_cost(int x)
	{
	 float total;
	 total = price * x;
	 return total;	
	}
public:
	void input()
	{
	 cout << "\nEnter book number\tbook title\tprice of the book" << endl;
	 cin >> num;
	 cin >> title;
	 cin >> price;	
	}
	
	void purchase()
	{
	 int i;
	 cout << "Number of copies to purchase: " << endl;
	 cin >> i;
	 float total;
	 total = total_cost(i);
	 cout << "Total cost to be paid: " << total << endl;	
	}
};

int main()
{
book b;
b.input();
b.purchase();
getch();
return 0;
}