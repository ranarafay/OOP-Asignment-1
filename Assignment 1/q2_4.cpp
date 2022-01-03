/*
P200636
Rao Muhammad Rafay
*/

#include <iostream>
using namespace std;

void PrintPattern2(char ch, int n)
{
    // base condition
    if (n == 0)
    {
        return;
    }

    // as in question statement there's no restriction mentioned on using loops
    // and in c++ we can not print a character multiple times by multipilying a character to integer i.e in python "#"*2 == ##
    // so we are using iterations for purpose of printing character multiple times
    int x = n - 1;
    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }

    for (int j = 0; j < 5 - x; j++)
    {
        cout << ch;
    }

    cout << endl;

    // recursive call to the function
    PrintPattern2(ch, n - 1);
}

int main()
{
    PrintPattern2('*', 5);

    return 0;
}