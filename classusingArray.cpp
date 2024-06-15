//wap program with class name Array1 having functions void setArray1(int[]) and void showArray(); to display array
#include<iostream>
using namespace std;
class Array1{
    public:
    int x[5];
    void setArray(int x[])
    {
        for(int i= 0;i<5;i++)
        {
            this->x[i] = x[i];
        }
    }
    void showArray()
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<x[i]<<" ";
        }
    }
};
int main()
{
    int x[5];
    printf("\nEnter array: ");
    for(int i= 0;i<5;i++)
    {
        cin>>x[i];
    }  
    Array1 a;
    a.setArray(x);
    a.showArray();
    return 0;
}
