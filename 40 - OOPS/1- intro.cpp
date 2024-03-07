#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero{

  //properties  
    char name[100];
    int health;
    char level;
    
};


int main()
{
  
  //creation of object
    Hero h1;

    cout<<"size :"<<sizeof(h1);    //size of class is 108 because 8 byte is added

    return 0;

}