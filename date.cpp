#include <iostream>
#include <string.h>
using namespace std;
const int maxlengthname=30;
const int patients=200;
class Date
{ 
 int day, month, year;
 public:
 Date(int=1,int=1,int=2022);
 int Day();
 int Month();
 int Year();
 void setDay(int);
 void setMonth(int);
 void setYear(int);
 void print();
};
Date::Date(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}

int Date::Day()
{
 return day;    
}

int Date::Month()
{
 return month;    
}

int Date::Year()
{
 return year;    
}
void Date::setDay(int d);
{
    day=d;
}
void Date::setMonth(int m);
{
    month=m;
}
void Date::setYear(int y);
{
    year=y;
}
