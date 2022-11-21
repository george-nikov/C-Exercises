#include <iostream>
#include <math.h>
using namespace std;
class SquarePyramid;
class Cylinder
{
    double height;
    public:
    Cylinder(double);//constructor
    double getHeight();//достъп до височината
    bool IsHigher(const SquarePyramid &) const;
};
Cylinder::Cylinder(double h)
double Cylinder::getHeight()
{
    return height;
}
class SquarePyramid
{
    double side;
    double height;
    public:
    SquarePyramid(double,double);//constructor
    double getSide();//достъп до страната на основата
    double getHeight();//достъп до височината на пирамидата
    double getApothem();//връща височината на околната страната
    double getsideArea();//връща лицето на околната повърхнина
    double getArea();//връща лицето на повърхнина на пирамидата
     friend bool Cylinder::IsHigher(const SquarePyramid &) const;
};
SquarePyramid::SquarePyramid(double a,double h)
{
    side=a;
    hight=h;
}
double SquarePyramid::getSide()
{
    return side;
}
double SquarePyramid::getHeight()
{
    return height;
}

bool Cylinder::IsHigher(const SquarePyramid & sp) const;
{
    return height>sp.height;
}
double SquarePyramid::getApothem()
{
    return sqrt((height*height)+((side/2)*(side/2)));
}
double SquarePyramid::getsideArea()
{
    return 4*((side*getApothem())/2);
}
double SquarePyramid::getArea()
{
    return getsideArea()+(side*side:);
}
int main()
{
    Cylinder c(4.4);
    SquarePyramid sp(3.9,7.6);
    if(c.IsHigher(sp))
    cout<<"Цилиндърът е по-висок от пирамидата."<<endl;
    else
    cout<<"Пирамидата е по-висока от цилиндъра."<<endl;
    cout<<"l="<<sp.getApothem()<<endl;
    cout<<"S1="<<sp.getsideArea()<<endl;
    cout<<"S="<<sp.getArea()<<endl;
    return 0;
}
