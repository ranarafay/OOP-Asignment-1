/*
P200636
Rao Muhammad Rafay
*/ 


#include <iostream>
using namespace std;

void replace(char* s1, char ch1, char ch2)
{
    // base condition for recursion
    if (*s1 == '\0')
    {
        return;
    }
    
    // condition for replacing the target character to desired character
    if (*s1 == ch1)
    {
        *s1 = ch2;
        // recursive call on rest of char array
        replace(s1+1,ch1,ch2);
    }
    
    // condition if target not found
    else
    {
        replace(s1+1,ch1,ch2);
    }

}

int main()
{
    char t1[]="Hello World";
	replace(t1,'l','a');

    cout << t1;
    
    return 0;
}