#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;    //FIRST IN FIRST OUT
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout<<"Size of queue = "<<q.size()<<endl;
    cout<<"first element (before pop)="<<q.front()<<endl;
    q.pop();
    cout<<"first element (after pop) ="<<q.front()<<endl;
    cout<<"Size of queue = "<<q.size()<<endl;
    return 0;
}