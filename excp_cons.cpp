#include<iostream>
using namespace std;

class divide{
	private:
	int *x;
	int *y;
	public:
	divide() {
			x = new int();
			y = new int();
			cout << "Enter two nos:";
			cin>>*x>>*y;
			try{
				if(*y==0)
					throw *x;
			}
			catch(int){
				delete x; delete y;
				cout<<"Second number cant be zero!"<<endl;
				throw;
			}
		}
	~divide(){
		try{
			delete x; delete y;
			}
		catch(...){
			cout<<"Error while dellocating memory"<<endl;
			}
		}
	float division() {
				return (float)*x/ *y;
			}
};

int main()
{
	try{
		divide d;
		float res = d.division();
		cout<<"Result is:"<<res<<endl;
	}
	catch(...){
		cout<<"Unknown excp"<<endl;
		}

return 0;
}
		
