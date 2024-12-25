#include<iostream>
#include<string>
#include <map>
#include<vector>
using namespace std;

//error in below logic check
vector<int> subArr(int arr[],int size, int sum)
{
    int add =0;
    vector<int> res;
    for(int i=0; i < size-1 ;i++)
    {
        add += arr[i];
        int ele = arr[i];

        for(int j=i+1; j <size-1 ; j++)
        {
            add += arr[j];
            if(add == sum)
            {
                //correct res
                for (int k = i+1 ; k < j; k++)
                {
                    res.push_back(arr[k]);
                }
                return res;
            }

            else if(add > sum)
            {
                break;
            }
        }
    }
    return res;
}


int main()
{
    int arr[8] = {1, 3, 4, 2, 2,3,1, 1};
    int sum = 9;
    int size = sizeof(arr)/sizeof(int);
    vector<int> res=subArr(arr,size,sum);

    for(int ele : res)
        cout<<ele<<"\t";
        cout<<"\n";
}