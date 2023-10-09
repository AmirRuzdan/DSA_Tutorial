#include <bits/stdc++.h>
#include<iostream>
#include "hero_external_class.cpp"
using namespace std;

// class Hero {

// public:
//     // properties
//         int health;
//         char name[100];
//         int level;

// };             

int main() 
{
    //creation of object of type(class) hero
    Hero spiderman;
    cout<<"size of spiderman object = "<<sizeof(spiderman)<<endl;
    spiderman.health = 70;
    spiderman.level = 9000;
    cout<<spiderman.health<<endl;
    cout<<spiderman.level<<endl;
return 0;
}