#include<iostream>
using namespace std;
class A{
    int no;
    public:
    A(int x)
    {
        no = x;
    }
    A(A &e){
        this->no = e.no;
    }
    void show()
    {
        cout<<no<<"\n";
    }
};
int main()
{
    A a1(100);
    A a2(a1);
    cout<<"First object: ";
    a1.show();
    cout<<"Second object:  ";
    a2.show();
    return 0;
}