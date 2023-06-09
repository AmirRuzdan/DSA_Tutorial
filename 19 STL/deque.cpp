#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"print first index element ="<<d.at(0)<<endl;

    cout<<"Print front element = "<<d.front()<<endl;
    cout<<"Print last element = "<<d.back()<<endl;

    cout<<"Empty or not = "<<d.empty()<<endl;

    cout<<"size before erase = "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);   //it does not delete the entire deque , it need range or value
    cout<<"size after erase = "<<d.size()<<endl;
    for( int i :d)
    {
        cout<<i<<" ";
    }
    return 0;
}