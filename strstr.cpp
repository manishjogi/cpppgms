#include<iostream>
#include<string>
using namespace std;



int strstrFunc(string str1, string str2)
{
    int res = 0;

    for(int i=0 ;i< str1.length()-1; i++ )
    {
        if( str1[i] == str2[0])
        {
            string str = str1.substr(i, str2.length());
            if( str == str2)
            {
                 res = i;
                 return res;
            }
               
        }
        
    }
    return -1;
}

int main()
{
    string str1= "hello world";
    string str2 = "llor";

    int res = strstrFunc(str1,str2);
    cout<< res <<endl;        
}