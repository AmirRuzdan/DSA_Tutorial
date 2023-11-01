#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Hero{

  private:  
    int health;

  public:  
    char level;

void print()
{
    // cout<<health<<endl;
    cout<<"printout = "<<level<<endl;
}

//PARAMETERISED CONSTRUCTOR
Hero (int health)
{
    this ->health = health;     //this keyword // current object
}
Hero ( int health , char level)
{
    this->level = level;
    this->health = health;
}

//GETTER
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
//SETTER
    void sethealth(int h )
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }

};

int main()
{
    //object created statically
    Hero h1(10);
    cout<<"Address of h1 = "<<&h1 <<endl;
    h1.print();

    //object created dynamically
    Hero *b = new Hero(11);
    b->print();

    Hero temp(11,'K');
    temp.print();

return 0;
}

