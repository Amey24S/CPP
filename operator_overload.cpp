class complex 
{
    int real, img;
    public:
        complex()
        {
            real=0;
            img=0;
        }
        complex(int x, int y)
        {
            real = x;
            img = y;
        }
        void display()
        {
            cout<<"the real part: "<< real << " and img part: "<< img << endl;
        }
        complex operator + (complex ob)
        {
            complex temp;
            temp.real = real + ob.real;
            temp.img = img + ob.img;
            return temp;
        }
        complex operator - (complex ob)
        {
            complex temp;
            temp.real = real - ob.real;
            temp.img = img - ob.img;
            return temp;
        }
        complex operator * (complex ob)
        {
            complex temp;
            temp.real = real * ob.real;
            temp.img = img * ob.img;
            return temp;
        }
        complex operator / (complex ob)
        {
            complex temp;
            temp.real = real / ob.real;
            temp.img = img / ob.img;
            return temp;
        }
};

int main()
{
    complex c1(4,5), c2(2,3);
    c1.display();
    c2.display();

    complex c3,c5,c4;
    c3 = c1 + c2 + c1;
//    c3=c1.operator + (c2);    
    c3.display();
    
    c4=c1.operator - (c2);
    c4.display();
    
    c5=c2*c1;
    c5.display();
    
    return 0;
}
