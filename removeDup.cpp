#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;


string removeDup(string str)
{
    string res = "";
    map<char,int> m;

    for(char c: str)
    {
        m[c]++;
    }
    for(auto ele: m )
    {
        res += ele.first;
    }

    return res;
}

string removeDupSet(string str)
{
    string res="";
    set<char> s;
    for(char c: str)
        s.insert(c);
    for(char c: s)
        res += c;
    return res;
}

string removeDupFor(string str)
{
    string res="";

    for(int i=0 ;i<str.length()-1;i++)
    {
        char c = str[i];
        bool flag = false;
        for(int j=i+1 ;j < str.length()-1;j++)
        {
            if(c == str[j])
            {
                flag = true;
                break;
            }
            else
                flag = false;
        }
        if(!flag)
            res += c;

    }

    return res;

}
//check 
string removeDupForSameStr(string str)
{
    // a a a a a b c a b 
    for(int i=0 ;i<str.length()-1;i++)
    {
        //char c = str[i];
        bool flag = false;
        for(int j=i+1 ;j < str.length()-1;j++)
        {
            if(str[i] == str[j])
            {
               str.erase(j,1); // Erase 1 character starting at index 0 and index move to next
               j--; //above line earse()  index move to next thats why j--
            }
            else
                continue;
        }

    }
    return str;
}

int main()
{
    string name ="aaaaabbbbbbbbbbcffffffdbgh";

    //cout << removeDup(name) << endl;
    //cout << removeDupSet(name) << endl;
    //cout << removeDupFor(name) << endl;
    cout << removeDupForSameStr(name) << endl;

}