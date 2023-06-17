#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
// removing extra characters
bool valid( char ch)
{
    if ( (ch>='a' && ch<='z')|| ( ch>='A' && ch<='Z')||  (ch>='0' && ch<='9'))
        {return 1;}
    else
        {return 0;}
}
//Turning characters to lowercase
char lowercase(char ch)
{
    if((ch>='a' && ch<='z') ||(ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        char temp = ch -'A' + 'a';
    return temp;
    }
}
//PLaindrome checking function
bool palindrome(string s)
{
    int i = 0;
    int j = s.length()-1;
    while(i<=j)
    {
        if(lowercase(s[i])==lowercase(s[j]))
        {
            return 1;
        }
        else{
            i++;
            j--;
        }

    }
    return 0;
}
// removing extra characters by adding string into the temp string
bool checkpalindrome (string s)
{
    string temp = "";
    for( int i =0; i <s.length();i++)
    {
        if ( valid(s[i]))     // using valid function
       { 
            temp.push_back(s[i]);
        }

    }
    for( int j= 0 ; j<temp.length();j++)
    {
        temp[j]= lowercase(temp[j]);      // using lowercase function
    }
    return palindrome(temp);   // using palindrome funtion
}



int main() 
{
    string s1 = "Ruzdan@1996";
    string s2 = "Ruzdan@19966991@nadzuR";

    cout<<"Checking palindrome = "<<checkpalindrome(s1)<<endl;
    cout<<"Checking palindrome = "<<checkpalindrome(s2);


return 0;
}