#include<iostream>
#include<string.h>
using namespace std;
class employee{
   int id,sal;
   char name[10];
   public:
   void setData(int i,char n[],int s){
      id = i;
      sal = s;
      strcpy(name,n);
   }

   void show()
   {
      cout<<id<<" "<<name<<" "<<sal;
   }
   
   int getSal()
   {
      return sal;
   }
};
int main()
{
    employee e1,e2;
    int id,sal;
    char name[10];
    cout<<"\nEnter id,sal,name of employee: ";
    cin>>id>>name>>sal;
    e1.setData(id,name,sal);

    cout<<"\nEnter id,sal name of employee: ";
    cin>>id>>name>>sal;
    e2.setData(id,name,sal);
   

    if(e1.getSal()>e2.getSal())
    {
      e1.show();
    }
    else
    {
      e2.show();
    }
    return 0;
}