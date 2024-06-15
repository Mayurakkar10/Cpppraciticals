#include<iostream>
using namespace std;
class isPrime{
   public:
   int a[5];
   void setArray(int a[])   
   {
       for(int i= 0;i<5;i++)
       {
           this->a[i] = a[i];
       }
   }
   void performOp()
   {
      int temp;
      for(int i= 0;i<5;i++)
      {
        temp = 0;
        for(int j = 2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                temp++;
                break;
            }
        }
        if(temp == 0&& a[i]!=1)
        {
            cout<<" "<<a[i];
        }
      }  
   }
};
int main()
{
    isPrime p;
    int a[5];
    cout<<"\nEnter array: ";
    for(int i= 0;i<5;i++)
    {
        cin>>a[i];
    }
    p.setArray(a);
    p.performOp();
    return 0;
}