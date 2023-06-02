#include<iostream>
using namespace std;

int main()
{
    int array1[6] = {1,2,3,4,5,6};
    int array2[4] = {3,4,5,6};

    for (int i =0;i<6;i++)
        {
            for (int j = 0;j<3;j++)
                {
                    if (array1[i]==array2[j])
                        {
                            cout<<array1[i]<<endl;
                        }
                }
        }
        return 0;
}