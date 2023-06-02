//creating even odd function using bitwise operator
#include<iostream>
using namespace std;

// 1 --> Even
// 0 --> Odd
bool isEven(int num){
    if(num&1)  // odd   if num&1 is true --> odd number
    {
        return 0;
    }
    else        //no need to write else because if else block will not run , it will move forward automatically
    {
        return 1;
    }
}

int main()
{
    int num;
    cin>>num;
    if (isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    
}
 