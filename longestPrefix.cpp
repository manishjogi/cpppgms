#include<iostream>
#include<string>
using namespace std;
//try to remove hardcoded values
void LongestPrefix(string prefix[])
{
    // int length1 = prefix[0].length();
    // int length2 = prefix[1].length();
    // int length3 = prefix[2].length();
    int length =  prefix->length();

    string result="";

    string pre = prefix[0];
    for(int i=0;i<pre.length();i++)
    {

        if( pre[i]==prefix[1].at(i) && pre[i]==prefix[2].at(i))
        {
                result +=pre[i];
        }
        else{
            break;
        }     

    }
    cout<<"Result:\t"<<result<<endl;

}

int main()
{
    string prefix[3] =  {"flow", "flow", "floight"}; 
    LongestPrefix(prefix); 
}