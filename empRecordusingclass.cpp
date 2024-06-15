//wap to create a empRecord class
#include<iostream>
#include<string.h>
using namespace std;
class empRecord{
    public:
    int id,sal;
    char name[10];
    void setEmp(int i,char n[],int s)
    {
       id = i;
       sal = s;
       strcpy(name,n);
    }
    void showEmp()
    {
        cout<<id<<" "<<name<<" "<<sal;
    }
};
int main()
{
    empRecord e;
    int id,sal;
    char name[10];
    cout<<"\nEnter id,name,salary of employee: ";
    cin>>id>>name>>sal;
    e.setEmp(id,name,sal);
    e.showEmp();
    return 0;
}