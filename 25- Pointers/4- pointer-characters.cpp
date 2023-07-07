#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main() 
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";    //extra null character is always present in strings at the end
    cout<<"Only typing arr will give us the address of first cell ="<<arr<<endl;         // prints the address of the first location of the array , which is also the adress of the array
    cout<<ch<<endl;           // cout function is different for int array and char array hebce it outputs the string for the char data type
    

    char *c = &ch[0];     
    cout<<"Address of character ch = "<< c <<endl;   // this will prints entire string


    char temp = 'm'; // it will keep printing until it finds a null character
    char *p = &temp;
    cout<<p<<endl;



    // char characters[6] =  "abcde";  // this is acceptable 
    //char *characters = "abcde";   // this is a very risky practice because it will point to only first address
    





return 0;
}