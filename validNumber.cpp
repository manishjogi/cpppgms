#include<iostream>
#include<string>

using namespace std;

bool validNumber(string num)
{
    string arr;
    if(num[0] == '+' || num[0] == '-')
       arr = num.substr(1,num.length());
    for(int i=0;i<arr.length();i++)
    {
        if(arr[i] == '.')
            continue;
        if(!(arr[i] > 48 && arr[i] <= 57))
            return false;

    }
    return true;

}


int main()
{
    string num = "+123.45";
    (validNumber(num) == 0)? cout <<"false" : cout <<"true";
    cout<<"\n";
}