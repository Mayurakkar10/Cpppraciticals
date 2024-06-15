//Reverse array using class and object
#include<iostream>
using namespace std;
class reverseArray{
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
       for(int i =0,j=4;i<3;i++,j--)
       {
           int temp = a[i];
           a[i] = a[j];
           a[j] = temp;
       }

       for(int i= 0;i<5;i++)
       {
         cout<<a[i]<<" ";
       }
    }
};

int main()
{
    reverseArray r;
    int a[5];
    cout<<"\nEnter array: ";
    for(int i= 0;i<5;i++)
    {
        cin>>a[i];
    }
    r.setArray(a);
    r.performOp();
    return 0;
}