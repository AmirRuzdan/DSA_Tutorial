#include<iostream>
#include<bits/stdc++.h>
// #include "Hero.cpp"    
using namespace std;


class Hero{

private:
    int health;
    
  public:  
    char level;


//GETTER      //getter function is used when the object is private
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }


//SETTER
    void sethealth(int h )        //it is just a function to set health value for private class member
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
    //creation of object
    Hero myhero;
    myhero.sethealth(79);
    myhero.level = 'S';
    cout<<"size :"<<sizeof(myhero )<<endl;
    cout<<"Health is = "<<myhero.gethealth()<<endl;    //using gethealth for private class member
    cout<<"Level is = "<<myhero.level<<endl;           //public 

return 0;
}