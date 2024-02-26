#include <bits/stdc++.h>
#include<iostream>
// #include "hero.cpp"       //we can create external class file and include in our main code like this
using namespace std;

class Hero {

public:
    // properties
        int health;
        char name[100];
        int level;
};             

int main() 
{
    //creation of object of type(class) hero
    Hero spiderman;
    cout<<"size of spiderman object = "<<sizeof(spiderman)<<endl;
    spiderman.health = 70;
    spiderman.level = 9000;
    cout<<spiderman.health<<endl;
    cout<<spiderman.level<<endl;

    Hero Superman;
    Superman.health = 1000;
    Superman.level = 10000000;
    cout<<Superman.health<<endl;
    cout<<Superman.level<<endl;
return 0;
}