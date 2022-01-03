/*
P200636
Rao Muhammad Rafay
*/

#include <iostream>
using namespace std;

int StrCmp(const char* s1, const char *s2)

{
    // lenght of (s1)
    int lens1 = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        lens1++;
    }
    
    // lenght of (s2)
    int lens2 = 0;
    for (int i = 0; s2[i] != '\0'; i++)
    {
        lens2++;
    }

    // conditionnal statements for comparing lengths of s1 and s2
    if (lens1 == lens2)
    {
        return 0;
    }
    
    if (lens1 < lens2)
    {
        return -1;
    }

    // it will work as else condition (else not used to remove warning "function comes out of non void")
    return 1; 
}



int main()
{
    char* t1=(char*)"Hello";
	char* t2=(char*)"World";

    cout << StrCmp(t1,t2) << endl;


    char* t3=(char*)"Hello11";
	char* t4=(char*)"World";

    cout << StrCmp(t3,t4) << endl;
    

    char* t5=(char*)"Hello";
	char* t6=(char*)"World11";

    cout << StrCmp(t5,t6);

    return 0;
}