#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string removespace(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }
        else
        {
            temp.push_back(str[i]);
        }
    }
}







int main() 
{
string s;
cout<<"Enter your string = ";
cin>>s;           // not working after spaces....need to check
cout<<removespace(s);
return 0;
}