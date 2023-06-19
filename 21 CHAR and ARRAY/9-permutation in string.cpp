//    #######LEETCODE QUESTION - 567 #####       //

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkequal( int array1[26],int array2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if(array1[i]!=array2[i])
        {
            return 0 ;
        }
        return 1;
    }
    
}
bool checkpermutation(string s1 , string s2)       //s1 is short string "ab" while s2 is "eidbaoo"
{
    //character count array   
    int count1[26]= {0};
    for (int i = 0; i <s1.length() ; i++)     // for example "ab"  s[0]= 'a'  and s[1] = 'b'
    {
        int index = s1[i]-'a';                   // a number is generated corresponding to each charcter alphabet 
        count1[index]++;                          // Changing the value of count array  from 0 to 1 at the corresponding index number obtained from the above line 
    }
    // now traversing across s2 in window size s1 length and compare
    int i = 0;
     int windowSize = s1.length();     // let us say k = window size
     int count2[26] = {0};

     // running for first window
     while(i <windowSize && i<s2.length())        // this while loop can also be written as for loop as above  //what if window is bigger than second string
     {
        int index =s2[i]- 'a';
        count2[index]++;
        i++;   
     }
     if (checkequal(count1,count2))
     {
        return 1;
     }

     // processing the window further 
     while(i<s2.length())
     {
        //addition of new character
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // deletion of old character
        char oldchar = s2[i - windowSize];
        index = oldchar -'a';
        count2[index]--;

        // checking again if its equal or not 
        if (checkequal(count1, count2))
        {
            return 1;
        }
        i++;

     }
}

int main() 
{


return 0;
}