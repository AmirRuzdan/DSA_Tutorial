#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Hero{

  private:  
    int health;

  public:  
    char *name;     //heap allocation 
    char level;
    static int timeTocomplete;

void print()
{
    // cout<<health<<endl;
    cout<<"Name = "<<this -> name <<" , ";
    cout<<"Health = "<<this ->health<<" , ";
    cout<<"Level = "<<this->level<<" "<<endl;
}
// DEFAULT CONSTRUCTOR
Hero()
{
    cout<<"Simple constructor called"<<endl;
    name = new char[100];

}
//PARAMETERISED CONSTRUCTOR

Hero ( int health , char level)
{
    this->level = level;      //this keyword stores address of the current object 
    this->health = health;
}

//COPY CONSTRUCTOR (for deep copy)

    Hero (Hero& temp)            // pass by reference and not by value
    {
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;               //(ch is the address of ch array which is now equal to address of name (by using this keyword))

        cout<<"Copy constructor called : "<<endl;
        this->health = temp.health;
        this->level = temp.level;

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

    void setName ( char name[])
    {
        strcpy(this->name , name );
    }

    //DESTRUCTOR
    ~Hero()
    {
        cout<<"Destructor called"<<endl;
    }

};

int Hero::timeTocomplete = 5;

int main()
{

    cout<<Hero::timeTocomplete<<endl;

    Hero a;
    cout<<a.timeTocomplete<<endl;     //not recommended --static member -- no need to create object for this














    

    


    // //Static
    // Hero a;             //memory deallocate (destructor called automatically)

    // //Dynamic
    // Hero *b = new Hero;
    // Hero hero1;
    // hero1.sethealth( 99);
    // hero1.setlevel('S');
    // char name[]= "Spiderman";
    // hero1.setName(name);
    // // hero1.print(); 

    // // use default copy constructor

    // Hero hero2(hero1);
    // // hero2.print();

    // hero1.name[2]= 'o';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();
    // hero2.print();
    // Hero tt;

    // Hero h2(179,'P');
    // h2.print();

    // // copy the constructor
    // Hero h3(h2);     
    // h3.print();
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

