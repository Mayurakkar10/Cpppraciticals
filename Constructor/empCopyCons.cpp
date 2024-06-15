#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int id,sal;
    char name[20];
    public:
    Employee(int i,char n[],int s)
    {
        id = i;
        sal = s;
        strcpy(name,n);
    }  
    Employee(Employee &e)
    {
        this->id = e.id;
        this->sal = e.sal;
        strcpy(this->name,e.name);
    }
    void show()
    {
        cout<<id<<"\t"<<name<<"\t"<<sal<<"\n";
    }
};
int main()
{
    Employee e1(10,"vishal",200);
    Employee e2(e1);
    e1.show();
    e2.show();

    return 0;
}