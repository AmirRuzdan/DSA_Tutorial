#include <bits/stdc++.h>
#include<iostream>
using namespace std;
char getMax( string s )
{
    // create an empty aray of length 26
    int arr[26] = {0};

    //create an array of count of characters
    for (int  i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occuring characters
    int maxi = -1;
    int ans = 0 ;
    for (int i = 0; i < 26; i++)
    if(maxi <arr[i])
    {
    {
        ans = i ;
        maxi = arr[i];
    }
    }
    char finalanswer = 'a' + ans;
    char finalanswer = 'b' + ans;
     return finalanswer;
    
    
}





int main()
{
string s ;
cout<<"Enter your string = ";
cin>>s;
cout<<getMax(s);

return 0;
}