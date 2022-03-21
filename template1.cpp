#include<iostream>
using namespace std;

template <class T, class U>

void multiply(T n1, U n2)
{
 cout << "The multiplication is: " << n1*n2 << endl;
}

int main()
{
 int A = 10; int B = 20;
 float a = 1.1, b = 2.2;

multiply(A,a);
multiply(b,b);

return 0;
}
