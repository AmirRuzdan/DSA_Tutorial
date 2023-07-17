#include <bits/stdc++.h>
#include<iostream>
using namespace std;


// dynamic memory allocation                   // 8 byte in 64 bit system and  4 byte in 32 bit systems

int main() 
{
    char ch = 'q';
    char *ptr = &ch;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(ptr)<<endl;

    int *arr = new int[5];             // array in heap memory

               


return 0;
}


