#include<iostream>
#include<string>
#include<map>

using namespace std;


void occrnc(string str)
{
    map<char, int> m;

    for(int i=0;i<str.length();i++)
    {
        m[str[i]]++;
    }

    for(auto ele:m)
    {
        cout <<ele.first << ":" <<ele.second<<"\t";
    }

    std::cout << "\nUsing iterator-based for loop:" << std::endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
}

int main()
{
    string name="aaassssdffasd";
    occrnc(name);
}