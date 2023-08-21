#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool palindrome(string str, int i , int j)
{
    
    if(i>j)
    {
        return true;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    else
    {
        return palindrome(str, i+1, j-1);
    }
}




int main() 
{

string name1= "abcde";
string name2= "abcdedcba";

if(palindrome(name1, 0 , name1.length()-1))
{
    cout<<"abcde is a palindrome"<<endl;

}
else
{
    cout<<"abcde is not a palindrome"<<endl;
}


if(palindrome(name2, 0 , name2.length()-1))
{
    cout<<"abcdedcba is a palindrome"<<endl;

}
else
{
    cout<<"abcdedcba is not a palindrome"<<endl;
}

return 0;
}