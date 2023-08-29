#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int a , int b)
{
if( a==0)
return 0;
if(b==0)
{
    return 1;
}
if(b==1)
{
    return a;
}    
if(b%2==0)
{
return power(a,b/2)*power(a,b/2);

}
else
{
    return a*power(a,b/2)*power(a,b/2);
}
}




int main()
{
int a, b;
cout<<"Enter your number =";
cin>>a;
cout<<endl;
cout<<"Enter your power =";
cin>>b;
cout<<"Your answer is = " << power(a,b);


return 0;
}