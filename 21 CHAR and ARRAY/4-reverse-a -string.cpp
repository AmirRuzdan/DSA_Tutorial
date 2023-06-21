#include <bits/stdc++.h>
#include<iostream>
using namespace std;

char lowercase ( char ch)
{
    if ( ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = (ch -'A')+'a';     // IMPORTANT STEP = 
        return temp; 
    }
}
void reverse( char name[], int size)
{   
    int i = 0 ;
    int j = size -1;
    while(i<j)
    {
        swap(name[i++], name[j--]);
    }
}
bool palindrome(char array[], int n)
{
    int i = 0 ;
     int j = n-1;
      while(i <=j)
      {
        if(lowercase(array[i])!=lowercase(array[j]))
        {
            return 0 ;
        }
        else 
        {
            i++;
            j--;

        }
    
      }
    return 1 ;
}
int length( char names[])
{
int count =0;
    for (int i = 0; names[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main() 
{
    char name[20];
    cout<<"Enter your name = ";
    cin>>name;
    int n = length(name);
    cout<<"My name is "<<name<<endl;
    cout<<"Length of your name is "<<n<<endl;
    reverse(name,n);
    cout<<name<<endl;
    cout<<palindrome(name,n);
    cout<<endl;

return 0;
}
