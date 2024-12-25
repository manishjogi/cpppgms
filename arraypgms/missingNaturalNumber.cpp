#include<iostream>
#include<string>
#include <map>
#include<vector>
using namespace std;



int missingNum(int arr[],int size)
{
    int n= size+1;
    int sum1 = n*(n+1)/2;
    int sum2=0;

    for(int i=0;i<size;i++)
    {
        sum2 += arr[i];
    }    

    // cout << sum1 << endl;
    // cout << sum2 << endl;

    return sum1 - sum2;
}

int main()
{
    int arr[9] {1,2, 3, 4,5, 6, 7,9,10};
    int size =9;
    int res = missingNum(arr, size);
    cout << res << endl;
}