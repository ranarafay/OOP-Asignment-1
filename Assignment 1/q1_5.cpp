/*
P200636
Rao Muhammad Rafay
*/ 


#include <iostream>
using namespace std;

bool StrFind(char* s1, char *s2,int*& listOfOccurrences, int& size)

{
    // lenth of (s2)
    int lens2 = 0;
    for (int i = 0; s2[i] != '\0'; i++)
    {
        lens2++;
    }
     
    //  taking variable for iteration and making an array to store occurrences
    int ind = 0;
    int arrsizes[20];
    int indarr = 0;

    // iterating char array for checking the occurences
    for (int i = 0; s1[i] != '\0'; i++)
    {
        int chk = 0;
        if (s1[i] == s2[ind])
        {
            chk++;
            for (int j = 0; j < lens2-1; j++)
            {
                if (s1[i+1+j] == s2[ind+1+j])
                {
                    chk++;
                }  
            }    
        }

        // condition (if the char array is present)
        if (chk == lens2)
        {
            arrsizes[indarr] = i;
            indarr++;
            size++;
            return true;
        }
    }
    listOfOccurrences = arrsizes;

    // working as else condition
    return false;
}


int main()
{
    char t1[]="substrstringstr";
	char t2[]="str";
    int* arr;
	int size=0;

    
    StrFind(t1,t2,arr,size);
    return 0;
}