//Types of Constructor
#include<iostream.>
using namespace std;
#include<string.h>
class Book
{
  int bid;
  char Bname[20];
  char Aname[20];
  public:

  //Default Constructor
  Book()
  {
    cout<<"\n"<<"This is default consturctor"<<"\n";
  }

  //Parameterised Constructor
  Book(int i,char b[],char a[])
  {
    bid = i;
    strcpy(Bname,b);
    strcpy(Aname,a);
  }

  //Copy Constructor
  Book(Book &b)
  {
    this->bid = b.bid;
    strcpy(this->Bname, b.Bname);
    strcpy(this->Aname, b.Aname);
  }

  //overlaoded Construtor
  Book(int price)
  {
   cout<<"\n"<<"this is price";
  }
  void show()
  {
    cout<<"\n"<<bid<<"\t"<<Bname<<"\t"<<Aname<<"\n";
  }
};
int main()
{
  cout<<"\nUsing default Constructor";
  Book b;

  cout<<"\nUsing Parametersized Constructor";
  Book b1(10,"The hero","Mr.dkhfk");
  b1.show();

  cout<<"\nUsing Copy Constructor";
  Book b2(b1);
  b2.show();

  cout<<"\nUsing Overloaded constructor";
  Book b3(200);

  return 0;
}