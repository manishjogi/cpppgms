#include<iostream>
#include<string>
#include <map>
#include<vector>
using namespace std;


//check
vector<int> mergeTwoArr(int arr1[],int arr2[],int size1,int size2)
{
    vector<int> res;

    int minSize = min(size1,size2);
    int i;
    for(i =0 ; i< minSize;i++)
    {
        if(arr1[i] >= arr2[i])
        {

            res.push_back(arr2[i]);
            res.push_back(arr1[i]);

        }
        else
        {
            res.push_back(arr1[i]);
            res.push_back(arr2[i]);
        }

    }

    if(size1 == size2)
        return res;
    else if(size1 > size2)
    {
        for(i;i<size1;i++)
        {
           res.push_back(arr1[i]);
        }
    }
    else 
        {
            for(i;i<size2;i++)
            {
                res.push_back(arr2[i]);
            }
        }
    return res;
}

int main()
{
    int arr1[3] = {1, 3, 6};
    int arr2[5] = {2, 5, 7, 8,9};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);



    vector<int> res=mergeTwoArr(arr1,arr2,size1,size2);
    
    for(int ele : res)
        cout<<ele<<"\t";
        cout<<"\n";
}