#include<iostream>
using namespace std;
class calculator{
   public:
   int a,b;//instance variable
         void setValue(int a, int b)
         {
            this->a = a;//local variable
            this->b = b;//local variable
         }
         void calResult()
         {
            cout<<"Addition is "<<a+b;
         }
};
int main(){
   calculator c;
   c.setValue(10,20);
   c.calResult();
   return 0;
}