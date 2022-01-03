#include <iostream>
using namespace std;

void PrintPattern1(int n, int k, char ch1, char ch2)
{
    if (n==0)
    {
        return;
    }

    PrintPattern1(k,n-1,ch1,ch2);

    cout << n;
    for (int i = 0; i < n; i++)
    {
        cout << ch1;
    }
    
}
// 1,2 --> 0,1 --> 0,0

// 1@2@@3@@@2++1+

int main()
{
    PrintPattern1(1, 3, '@', '+');
    
    return 0;
}