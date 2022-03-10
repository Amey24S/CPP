#include<iostream>
using namespace std;
class measure
{
    public:
    float L,B,H;
    void setinput(float a, float b, float c)
    {
        L=a;B=b;H=c;
    }
    float volume()
    {
        return (L*B*H);
    }
    float area()
    {
        return (2*((L*H)+(B*H)+(L*B)));
    }
};

int main()
{
    measure obj1;
    obj1.setinput(2,3,4);
    cout << "First inputs are: " << obj1.L << " " << obj1.B << " " << obj1.H << endl;
    cout << "Volume is: " << obj1.volume() << endl;
    cout << "Area is: " << obj1.area() << endl << endl;
    
    measure obj2;
    obj2.setinput(1,1.5,2);
    cout << "Second inputs are: " << obj2.L << " " << obj2.B << " " << obj2.H << endl;
    cout << "Volume is: " << obj2.volume() << endl;
    cout << "Area is: " << obj2.area() << endl;
    
    return 0;
}
