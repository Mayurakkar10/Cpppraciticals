#include <iostream>
using namespace std;
#include <string.h>
class employee
{
    int id, sal;
    char name[10];

public:
    void setData(int i, char n[], int s)
    {
        id = i;
        sal = s;
        strcpy(name, n);
    }
    void show()
    {
        cout << id << " " << name << " " << sal;
    }

    int getSal()
    {
        return sal;
    }
};
int main()
{
    employee e[3];
    int id, sal;
    char name[10];
    for (int i = 0; i < 3; i++)
    {
        cout <<"\nEnter id ,name,sal of employee: ";
        cin>>id>>name>>sal;
        e[i].setData(id, name, sal);
    }

    int max = e[0].getSal(),index = 0;
    for (int i = 0; i < 3; i++)
    {
        if (max > e[i].getSal())
        {
            max = e[i].getSal();
            index = i;
        }
    }
    cout<<"\nhighest salary:";
    cout<<e[index].getSal();
    return 0;
}