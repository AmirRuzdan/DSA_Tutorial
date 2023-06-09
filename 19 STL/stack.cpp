#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;            //LAST IN FIRST OUT
    s.push("Love");
    s.push("babbar");
    s.push("kumar");
    cout<<"Top element = "<<s.top()<<endl;
    s.pop();
    cout<<"Top element = "<<s.top()<<endl;
    cout<<"Size of stack is = "<<s.size()<<endl;
    cout<<"Empty or not = "<<s.size();
    return 0;




}   