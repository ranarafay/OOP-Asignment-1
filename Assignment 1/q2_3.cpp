/*
P200636
Rao Muhammad Rafay
*/ 


#include <iostream>
using namespace std;


void PrintPattern1(int n, int k, char ch1, char ch2)
{
    // base condition
    if (k == 1)
    {
        return;
    }

    // as in question statement there's no restriction mentioned on using loops
    // and in c++ we can not print a character multiple times by multipilying a character to integer i.e in python "#"*2 == ##
    // so we are using iterations for purpose of printing character multiple times 
    if (n > 0)
    {
        for (int i = n; i < k+1; i++)
        {
            cout << i;
            for (int j = 0; j < i; j++)
            {
                cout << ch1;
            }
        }
    }

    cout << k-1;
    for (int i = k-1; i > 0; i--)
    {
        cout << ch2;
    }

    // recursive call to function
    PrintPattern1(n - k, k - 1, ch1, ch2);
}

// 1@2@@3@@@2++1+

int main()
{

    PrintPattern1(1, 7, '@', '+');

    return 0;
}