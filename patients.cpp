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

void Date::Print()
{
    cout<<day<<"."<<month<<"."<<year<<endl;
}

class Patients
{
  char Name[maxlengthname];
  Date DOB;//DOB - object
  int visits; 
  public:
  Patient();
  Patient(char *,const Date&,int);
  const char* getName();
  Date getDOB();
  int getVisits();
  void print();
};
Patient::Patient()
{
    visits=0;
}
Patient::Patient(char *,const Date& d,int v);
{
    strcpy(Name,n);
    DOB=d;
    visits=v;
}
const char* Patient::getName()
{
    return Name;
}
Date Patient::getDOB();
{
    return DOB;
}
int Patient::getVisits()
{
    return visits;
}
void Patient::print()
{
    cout<<"The name of the patient is:: "<<Name<<endl;
    cout<<"The day of birth is: ";DOB.print();
    cout<<"The number of visits are: "<<visits<<endl;
}
class Doctor
{
    char Name[maxlengthname];
    Patient patientslist[patients];
    int patientsregisterd;
    public:
    Doctor(char*);
    const char* getName();
    void registerPatient(const Patient&);
    double average();
    void printUpper(int);
Doctor:Doctor(char* n)
{
    strcpy(Name,n);
    
    patientsregistered=0; 
}
};
