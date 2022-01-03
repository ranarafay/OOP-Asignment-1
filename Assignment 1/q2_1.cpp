/*
P200636
Rao Muhammad Rafay
*/ 


#include <iostream>
using namespace std;

int find(int array[], int length, int target)
{
    // initializing 
    length += -1;

    if (length > -1)    // as base condition
    {
        // condition for checking target 
        if (array[length] == target)
        {   
            // returning index if target found
            return length;
        }
        
        else
        {
            // recursive call to function
            find(array,length,target);
        }
    }

    // condition when target not found
    else
    {   
        return -1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = 6;

    cout << find(arr, len, 5);

    return 0;
}