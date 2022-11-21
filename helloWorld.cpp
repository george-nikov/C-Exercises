/* Exercise 1 */
#include <iostream>

using namespace std;
class A
{
    public:
    void hello();
    
};
void A::hello()
{
  cout<<"hello world!\n";
    
}
int main()
{
    A e;
    e.hello();
    return 0;
}










/* Exercise 2 */
using namespace std;
class B
{
    public:
    int a,b;
    void init(int, int);
};

void B::init(int x, int y)
{
    a=x;
    b=y;
    
}
int main ()
{
    B c;
    c.init(34,-566);
    cout <<c.a<<""<<c.b<<endl;
    return 0;
}









/* Exercise 3 */
using namespace std;
class C 
{
    private:
    int a,b;
    public:
void init(int,int);
void display() const;
};
void C::init(int x,int y)
{
    a=x;
    b=y;
    
}
void C::display()const
{
    cout<<a<<" "<<b<<endl;

}
int main()
{
    C c;
    c.init(34,-566);
    c.display();
    return 0;
    
}

/* Exercise 4 */
#include <iostream>
#include <math.h>
using namespace std;
const double DEG_TO_RAD = 3.14159265/180;
class angle
{
public:
void setValue(double);
double getSin() const;
double getCos() const;
double getTan() const;

private:
double degrees;
};

void angle::setValue(double a)
{
    degrees=a;
