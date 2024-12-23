#include<iostream>
#include<string>

using namespace std;


void reverse(const char* arr)
{    
    int length= 0;
    while(arr[length] != '\0')
    {
        length++;
    }
    cout <<length <<endl;
    int j=0;
    //char result[length];

    char* result = new char[5];
    for(int i=length-1 ;i >= 0 ;i--)
    { 
        
        result[j] = arr[i];
        j++;
        //cout <<  result[j] << "::"<< arr[i];
    }

    cout<< result <<endl;
    
}
//check why res is null
void reverseStr(string arr)
{    
    string res = "";
    int j= 0;
    for(int i=arr.length()-1 ; i >= 0 ; i--)
    {        
        res += arr[i];
        j++;

    }

    cout << res <<endl;
    
}

void swap (string res)
{
    char temp = ' ';
    int len = res.length();
    for(int i=0;i<len/2;i++)
    {
        char temp =res[i];
        res[i] = res [len - 1];
        res [len - 1] = temp;
        len--;
    }
    cout << res <<endl;
}


int main()
{
    //
    // char* arr3 = new char[10];
    // strcpy(arr3, "hello");  // Copy a string into the allocated memory
    // delete[] arr;          // Free the memory when done

    // char ar[10] = "hello";
    // char ar1[10] = {'h','e','l','l'};

    //char ar4[10] = "hello";
    // char* arr = &ar4[1];
    // cout<< arr <<endl;

    const char* arr = "hello";
    string a = "aabbcc";
    //reverse(arr);
    reverseStr(a);
    //swap(a);

}