#include <iostream>
using namespace std;
class Majority
{
public:
    int x[8];
    int size = sizeof(x) / sizeof(x[0]);
    void setArray(int x[])
    {
        for (int i = 0; i < size; i++)
        {
            this->x[i] = x[i];
        }
    }

    void perforomOp()
    {
        int mcount = 0, index = 0;
        for (int i = 0; i < size; i++)
        {
            int count = 0;
            for (int j = 0; j < size; j++)
            {
                if (x[i] == x[j])
                {
                    count++;
                }
            }
            if (count > mcount)
            {
                mcount = count;
                index = i;
            }
        }
        if (mcount > size / 2)
        {
            cout << x[index] << " is majority element";
        }
        else
        {
            cout << "no majority element";
        }
    }
};
int main()
{
    Majority m;
    int a[8];
    cout<<"\nEnter array: ";
    for(int i= 0;i<8;i++)
    {
        cin>>a[i];
    }
    m.setArray(a);
    m.perforomOp();
    return 0;
}
