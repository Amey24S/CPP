#include <iostream>

using namespace std;

inline int cube(int i)
{
    return i*i*i;
}

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin >> n;
    cout<<"cube is: "<<cube(n);
    return 0;
}
