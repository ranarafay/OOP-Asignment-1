#include<iostream>
using namespace std;

/*Returns the length of the string in number of characters. */
int Strlen(char* s1)
{
}

/*Copies string s2 into array s1. The value of s1 is returned. */
char* Strcpy(char* s1, const char *s2)
{
}


/*Compares the string s1 with the string s2.
The function returns 0 , less than 0 or greater
than 0 if s1 is equal to , less than or greater
than s2 , respectively. */
int StrCmp(const char* s1, const char *s2)
{
}

/*A call to StrTok breaks string s1 into
&quot;tokens&quot; ( logical pieces such as words
in a line of text) separated by character
contained in const char s2. size parameter
will be updated number of tokens and save
actual tokens in char**&amp; listOfTokens.
*/
void StrTok(char* s1, const char s2, char**& listOfTokens , int& size)
{
}

/*Searches the string s1 for the all the occurrences
of the string s2. Save starting indexes in array (listOfOccurrences).
And save updated size of array listOfOccurrences also return true. But
if s2 not found returns false. */
bool StrFind(char* s1, char *s2,int*& listOfOccurrences, int& size)
{
}

/*swap the string of swapIndex0 and swapIndex1 within 2d char array s1 return true if indexes are correct and swapping is successful and return false if swapping is not successful (indexes are incorrect) */
bool StrSwapIn2DArray (char** s1, int numberOfRows, int swapIndex0, int swapIndex1)
{ 
}


int find(int array[], int length, int target)
{
}

void replace(char* s1, char ch1, char ch2)
{
}

void PrintPattern1(int n, int k, char ch1, char ch2)
{
}

void PrintPattern2(char ch, int n)
{
}

void PrintPattern3(int start, int end)
{
}
