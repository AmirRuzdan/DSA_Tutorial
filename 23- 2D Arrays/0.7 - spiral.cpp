#include <bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> spiral(vector<vector<int>>& matrix)
{
    vector<int> ans;
    int row = matrix.size();              // no. of rows
    int column = matrix[0].size();        // no. of columns
    int total = row*column;               // total number of elements


    //initialising index of matrix
    int startingRow = 0;
    int startingCol= 0;
    int endingRow = row- 1;
    int endingCol = column - 1;
    int count = 0;
    while (count<total)
    {
        for (int  i = startingCol; count<total && i <= endingCol; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for (int i = startingRow;count<total &&  i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for (int  i = endingCol;count<total &&  i >=startingCol ; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for (int  i =endingRow; i >=startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
        
    }
    return ans;
}




int main() 
{

vector<vector<int>> myarray = {{1,2,3},{4,5,6},{7,8,9}};

spiral(myarray);




    vector<int> result = spiral(myarray);

    for (int i = 0; i < result.size(); i++) 
    {
      

        cout << result[i] << " ";
        
    
    }



return 0;
}