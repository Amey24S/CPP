#include <iostream>
using namespace std;
//defining a class named Rectangle
class Rectangle{
//setting a private specifier for length and width
    private:
        float length;
        float width;
//setting public specifier for setlength , setwidth and displaying the values
    public:
        void setlength(float l){
            length=l;
        }
        void setwidth(float w){
            width=w;
        }
        float perimeter(){
            return (2*(length+width));
        }
        float area(){
            return (length*width);
        }
        void show(){
            cout<<"\nLength: "<< length;
            cout<<"\nWidth: "<< width;
            cout<<"\nPerimeter: "<< perimeter();
            cout<<"\nArea: "<< area()<< endl;
        }
        
//check whether the area is same or not
        static int sameArea(Rectangle r1, Rectangle r2){
            if (r1.area()==r2.area())
               { return 1; }
            else
               { return 0; }
        }
};
int main()
{
    Rectangle rec1,rec2;
    rec1.setlength(5);
    rec1.setwidth(2.5);
    rec2.setlength(5);
    rec2.setwidth(18.9);
    cout<<"\nRectangle 1\n";
    rec1.show();
    cout<<"\nRectangle 2\n";
    rec2.show();


    int s=Rectangle::sameArea(rec1,rec2);
    if (s==1)
        cout<<"\nThe two reactangles are the same\n";
    else if (s==0)
        cout<<"\nThe two reactangles are NOT the same.\n";
        
    rec1.setlength(15);
    rec1.setwidth(6.3);
    cout<<"\nRectangle 1\n";
    rec1.show();
    
    int s2=Rectangle::sameArea(rec1,rec2);
    if (s2==1)
        cout<<"\nThe two reactangles are the same\n";
    else if (s2==0)
        cout<<"\nThe two reactangles are NOT the same.\n";
    
    return 0;
}
