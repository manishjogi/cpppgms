#include<iostream>
#include<string>
#include<map>

using namespace std;

//this function returns sorted non repeting char beacuse map <key> are inserted in sorted order.
char RandomNonrepeating(string str)
{
    map<char,int> m;

    for(char c: str)
        m[c]++;
    for(auto ele: m)
    {
        if(ele.second != 0)
            return ele.first;
        
    }
    return ' ';

}
//check this issue
char firstNonrepeating(string str)
{   
    for(int i=0;i< str.length()-1;i++)
    {
        int flag=0;
        for(int j=i+1;j<str.length()-1;j++)
        {
            if(str[i] == str[j])
            {
                flag++;
            }
                
        }
        if(flag == 0)
            return str[i];

    }
    return ' ';

}


int main()
{
    //cout<< RandomNonrepeating("swiss") <<endl;
    cout<< firstNonrepeating("swwiiss") <<endl;
}