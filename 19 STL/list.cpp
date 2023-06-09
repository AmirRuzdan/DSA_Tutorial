#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    for (int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list before erasing = "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"List after erasing = ";
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of list after erasing = "<<l.size()<<endl;

    return 0;
}