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
    cout<<"Level = "<<this->level<<endl;
    cout<<"Health = "<<this ->health<<endl;
}
// DEFAULT CONSTRUCTOR
Hero()
{
    cout<<"Default constructor called"<<endl;
}
//PARAMETERISED CONSTRUCTOR

Hero ( int health , char level)
{
    this->level = level;      //this keyword stores address of the current object 
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
    Hero h2(179,'P');
    h2.print();

    Hero h3(h2);     // copy the constructor
    h3.print();
    







    // //object created statically
    // Hero h1(10);
    // cout<<"Address of h1 = "<<&h1 <<endl;
    // h1.print();

    // //object created dynamically
    // Hero *b = new Hero(11);
    // b->print();

    // Hero temp(11,'K');
    // temp.print();

return 0;
}

