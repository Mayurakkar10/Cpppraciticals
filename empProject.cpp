#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    int id,sal;
    char name[20];
    char email[20];
    char contact[20];
    public:
    void addEmpRecord(int i,char n[],char e[],char c[],int s)
    {
        id = i;
        sal = s;
        strcpy(name,n);
        strcpy(email,e);
        strcpy(contact ,c);
    }
    void DisplayRecord()
    {
      cout<<"\n"<<id<<"\t"<<name<<"\t"<<email<<"\t"<<contact<<"\n";
    }
};
main()
{
   Employee emp[3];
   int id,sal;
   char name[20],email[20],contact[20];
   
   for(int i= 0;i<3;i++)
   {
    cout<<"\nEnter id,name,email,contact,salary of employee: ";
    cin>>id>>name>>email>>contact>>sal;
    emp[i].addEmpRecord(id,name,email,contact,sal);
   }

   for(int i= 0;i<3;i++)
   {
     emp[i].DisplayRecord();
   }

}