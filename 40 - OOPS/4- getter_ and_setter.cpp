 #include<iostream>
#include<bits/stdc++.h>
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
    h1.sethealth(89);

    cout<<"Health is = "<<h1.gethealth()<<endl;
    cout<<"Size of h1 = "<<sizeof(h1)<<endl;   //padding and greedy alignment 
    h1.setlevel('B');
    cout<<"Level is = "<<h1.getlevel()<<endl;


return 0;
}