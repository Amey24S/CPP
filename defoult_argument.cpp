#include <iostream>

using namespace std;

int volume(int l=2, int w=3, int h=4)
{
    return l*w*h;
}

int addition(int a=2, int b=3, int c=4)
{
    return a+b+c;
}

/*
int addition(int a=1, int b, int c)
{
    return a+b+c;
}

int addition(int a, int b=5, int c)
{
    return a+b+c;
}
*/

int main()
{
    cout<<"Volume: "<<volume()<<endl;
    cout<<"Volume: "<<volume(1)<<endl;
    cout<<"Volume: "<<volume(1,1)<<endl;
    cout<<"Volume: "<<volume(1,1,1)<<endl;
    
    cout<<"addition: "<<addition(2)<<endl;
    cout<<"addition: "<<addition(6, 7)<<endl;
    cout<<"addition: "<<addition(2, 3, 4)<<endl;
    return 0;
}

/*
void f(int a, int b, int c = 0);    valid argument
void f(int a, int b=0, int c=0);    valid argument
void f(int a=0, int b, int c=0);    invalid argument || we have to assign values of default argument from right to left
void f(int a=0, int b, int c);      invalid argument
void f(int a=0, int b=0, int c=0);  valid argument
*/
