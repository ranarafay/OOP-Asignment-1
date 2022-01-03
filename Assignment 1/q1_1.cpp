/*
P200636
Rao Muhammad Rafay
*/ 


#include <iostream>
using namespace std;

int Strlen(char *s1)
/*Returns the length of the string in number of characters. */
{
    // for counting the characters
    int cnt = 0;

    // iterating on all characters of s1 
    while (true)
    {
        cnt++;
        s1++;
        int a = *s1;
        if (a == 0)
        {
            break;
        }
    }
    
    
    // returning length of string as int
    return cnt; 
}

int main()
{

    char t1[] = "rafay";

    cout << Strlen(t1);

    return 0;
}