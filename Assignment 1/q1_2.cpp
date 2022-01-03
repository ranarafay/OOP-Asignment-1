/*
P200636
Rao Muhammad Rafay
*/

#include <iostream>
using namespace std;

char* Strcpy(char* s1, const char *s2)
/*Copies string s2 into array s1. The value of s1 is returned. */
{
    // length of (s1)
    int lens1 = 0;
    for (int i = 0; s1[i]!='\0'; i++)
    {
        lens1++;
    }

    // length of (s2)
    int lens2 = 0;
    for (int i = 0; s2[i]!='\0'; i++)
    {
        lens2++;
    }

    // making a new pointer to a char array
    char * arr = new char [lens1+lens2];

    // iterating and copying (s1) and (s2) to new char array (arr)
    for (int i = 0; s1[i]!='\0'; i++)
    {
        arr[i] = s1[i];   
    }
    int i = 0;
    for(int j = lens1; j< lens1+lens2; j++)
    {
        arr[j] = s2[i];
        i++;
    }

    // making (s1) equals to new array (arr)
    s1 = arr;

    return s1;
}



int main()
{
    
    char t1[]="First String";
	char* t2=(char*)"Hello World";
	
	cout << Strcpy(t1,t2);
    
    return 0;
}