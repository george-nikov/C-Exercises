#include <iostream>

using namespace std;
#include <iostream>
#include <math.h>
using namespace std;

class expr
{
 int n;
 double x;
 public:
 expr(int,double);
 double Ex1();
 double Ex2();
 double Ex3();
};
expr::expr(int m,double y)
{
    n=m;
    x=y;
}


double expr::Ex1() 
{
double S = 1, x1 = 1;
for(int i = 1; i<= n; i++)
{
x1 = x1*x/i;
S += x1;
}
return S;

}

double expr::Ex2() 
{
double S=1, x1=1;
for(int i=1; i<= 2*n; i = i+2)
{
x1 = -x1*x*x/(i*(i+1));
S += x1;
}
return S;
}

double expr::Ex3()
{
double S=x,x1=x;
for(int i=2;i<=2*n;i=i+2)
{
    x1=-x1*x/(i*(i+1));
    S+=x1;
}
return S;
}

int main()
{
    int n;
    do
    {
        cout<<"n=";
         cin>>n;
    }while(n<0);
    double x;
    do {
        cout<<"x=";
        cin>>x;
    }
        while(fabs(x)>1);
        expr t(n,x);
        cout<<"S1= "<<t.Ex1()<<endl;
        cout<<"S2= "<<t.Ex2()<<endl;
        cout<<"S3= "<<t.Ex3()<<endl;
        
    return 0;
}
