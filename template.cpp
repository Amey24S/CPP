#include<iostream>
using namespace std;

template <typename T>

T swap(T *n1, T *n2)
{
 T *temp;
 n1 = temp;
 n2 = n1;
 temp = n2;
}

int main()
{
 int A = 10; int B = 20; 
 long a = 11, b = 22;
 string str1 = "abc"; string str2 = "xyz";

cout<<"Before swapping "<< "A: " << A << " " << "B: " << B <<endl;
swap(A,B);
cout << "After swapping " <<"A: " << A << " " << "B: " << B <<endl;

cout<<"Before swapping "<< "str1: " << str1 << " " << "str2: " << str2 <<endl;
swap(str1,str2);
cout << "After swapping " <<"str1: " << str1 << " " << "str2: " << str2 <<endl;


return 0;
}
