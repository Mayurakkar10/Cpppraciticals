#include <iostream>
#include <string.h>
using namespace std;
class Player
{
    int id, run;
    char name[20];

public:
void show();
    Player(int i, char n[], int r)
    {
        id = i;
        run = r;
        strcpy(name, n);
    }
    Player(Player &p)
    {
        this->id = p.id;
        this->run = p.run;
        strcpy(name, p.name);
    }
    //    void show()
    //    {
    //     cout<<id<<"\t"<<name<<"\t"<<run<<"\n";
    //    }

    
};

    void Player::show()
    {
      cout<<id<<"\t"<<name<<"\t"<<run<<"\n";
    }
int main()
{
    Player p1(10, "pratik", 200);
    Player p2(p1);
    p1.show();
    p2.show();
    return 0;
}