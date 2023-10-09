#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

class Hero {

private:
        int health;
        char level;

public:
int getHealth() 
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
    //creation of object of type(class) hero
    Hero spiderman;
    cout<<"Size of spiderman object = "<<sizeof(spiderman)<<endl;
    spiderman.setHealth(99);
    cout<<"Spiderman health is "<<spiderman.getHealth()<<endl;;
    spiderman.setLevel('S');
    cout<<"Spiderman level is "<<spiderman.getLevel()<<endl;


    // cout<<spiderman.health<<endl;
    // cout<<spiderman.level<<endl;
return 0;
}