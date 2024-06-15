//find max and min using class and object;
#include<iostream>
using namespace std;
class MaxMinArray{
    public:
    int a[5];
    void setArray(int a[])
    {
        for(int i= 0;i<5;i++)
        {
            this->a[i] = a[i];
        }
    }
    void PerformOperation()
    {
        int max=a[0],min=a[0];
        for (int i = 0; i < 5; i++)
        {
            if(a[i]>max)
            {
              max = a[i];
            }
            else if(a[i]<min)
            {
              min= a[i];
            }
        }
        cout<<"Max = "<<max<<" "<<"Min = "<<min;
    }
};

int main()
{
    MaxMinArray a;
    int b[5];
    cout<<"\nEnter array: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>b[i];
    }
    a.setArray(b);
    a.PerformOperation();
    return 0;
}