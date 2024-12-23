#include<iostream>
#include<string>

using namespace std;

void palindromeornot(string str)
{
    string rev = "";

    for(int i=0 ; i<str.length() ;i++)
    {
        rev += str[str.length()-i-1];
    }

    if( rev == str)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;

}

//121
void numberPal(int num)
{
    int rem,res;
    int check =num;
    while(num > 0)
    {
        rem = num % 10; 
        res = res*10 + rem;
        num = num/10;
    }
    if (res == check)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;

}



int main()
{

    string a = "malayalam";
    palindromeornot(a);
    numberPal(31213);
}