#include<iostream>
#include<string>
#include <map>
#include<vector>
using namespace std;


vector<int> dupinArr(int arr[],int size)
{
    map<int,int> m;
    vector<int> res;
     for(int i=0;i<size;i++)
    {
        m[arr[i]]++;
    }

    for(auto ele: m)
    {
        if(ele.second > 1)
        {
            res.push_back(ele.first);

        }
            
    }
    return res;
}

int main()
{
    int arr[8] = {1, 3, 4, 2, 2,3,1, 1};
    int size = sizeof(arr)/sizeof(int);
    vector<int> res= dupinArr(arr,size);

    for(int ele : res)
        cout<<ele<<"\t";
        cout<<"\n";
}