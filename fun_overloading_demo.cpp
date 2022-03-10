#include <iostream>

using namespace std;

void display(int a)
{
    cout<<"Integer number: " << a << endl;
}

void display(float b)
{
    cout<<"Integer number: " << b << endl;
}

void display(int a, float b)
{
    cout<<"Integer number: " << a << " and Float number: " << b << endl ;
}

int main()
{
    int a=5;
    float b=5.5;
    display(a);
    display(b);
    display(a,b);
    return 0;
}
