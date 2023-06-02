#include<iostream>
using namespace std;

int main()
{
    int array1[4] = {1,2,3,3};
    int array2[3] = {3,3,4};

    for (int i =0;i<4;i++)
        {
            for (int j = 0;j<3;j++)
                {
                    if (array1[i]<array2[j])
                    {
                        break;
                    }
                    if (array1[i]==array2[j])
                        {
                            cout<<array1[i]<<" ";
                            array2[j]= INT_MIN;
                            break;
                        }
                }
        }
        return 0;
}