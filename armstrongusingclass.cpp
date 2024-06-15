#include<iostream>
using namespace std;
class Armstrong{
   int n;
   public:
   int flag;
   void setNumber(int x)
   {
     n = x;
   }
   void checkArmstrong()
   {
      int temp = n,count = 0;
      while (temp>0)
      {
         ++count;
         temp = temp/10;
      }
      cout<<"count = "<<count;
      temp = n;
      int i,p,sum= 0;
      while(temp>0)
      {
          int rem = temp%10;
          i = 1;
          p = 1;
          while(i<=count)
          {
              p = p*rem;
              i++;
          }
          sum = sum+p;
          temp = temp/10;
          cout<<"sum = "<<sum;
      }
      
   }
   void show(){
    if(flag == 0)
    {
        cout<<"\nArmstrong Number";
    }
    else
    {
        cout<<"\nNot a Armstrong Number";
    }
   }
};
int main()
{
    Armstrong a;
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    a.setNumber(n);
    a.checkArmstrong();
    a.show();
    return 0;
}
