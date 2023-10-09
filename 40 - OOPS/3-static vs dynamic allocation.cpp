#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Hero 
{

private:
        int health;          // currently health is private

public:
        char level;

int getHealth()              //using getter to access private property
{
    return health;
}
char getLevel()
{
    return level;
}

void setHealth(int h)
{
    health = h;
}

void setLevel(char ch)
{
    level = ch;
}
};


int main() 
{

//static allocation
Hero a;
cout<<"Level is  = "<<a.level<<endl;                // since level is public
cout<<"Health is  = "<<a.getHealth()<<endl;        //since health is public

//dynamic allocation
Hero *b = new Hero;
cout<<"Level is = "<<(*b).level<<endl;
cout<<"Health is = "<<(*b).level<<endl;










return 0;
}