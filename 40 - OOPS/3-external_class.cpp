#include<iostream>
#include<bits/stdc++.h>
// #include "Hero.cpp"           //including external class
using namespace std;


class Hero{

private:
    int health;
    
  public:  
    char level;
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
    //creation of object
    Hero h1;
    h1.sethealth(79);
    h1.level = 'S';
    cout<<"size :"<<sizeof(h1 )<<endl;
    cout<<"Health is = "<<h1.gethealth()<<endl;
    cout<<"Level is = "<<h1.level<<endl;

return 0;
}