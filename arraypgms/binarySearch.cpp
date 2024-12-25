#include<iostream>
#include<string>
#include <map>
#include<vector>
using namespace std;


int binarySearch(int* arr,int key)
{

    int low=0;
    int high= 6-1;

    

    while(low <= high)
    {
        int mid = (low + high )/2;

        if(arr[mid]  == key)
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid+1;
        }
    }
       
    return -1;

}


int main()
{

int a;
int& b =a;

    int arr[8] = {1, 3, 5,8,9,12};
    int key = 12;
    int res= binarySearch(arr,key);

    cout << res <<endl;
        
 }





//  Return an array by reference

//  // Define a function that returns a reference to a static array
// int (&getArray())[5] {
//     static int arr[5] = {1, 2, 3, 4, 5};  // Static ensures the array persists after the function ends
//     return arr;
// }

// int main() {
//     // Get the array reference
//     int (&myArray)[5] = getArray();

//     // Print the array elements
//     for (int i = 0; i < 5; ++i) {
//         std::cout << myArray[i] << " ";
//     }

//     return 0;
// }