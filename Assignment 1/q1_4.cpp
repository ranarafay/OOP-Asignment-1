/*
P200636
Rao Muhammad Rafay
*/

#include <iostream>
using namespace std;

void StrTok(char *s1, const char s2, char **&listOfTokens, int &size)
{
    // making a pointer to array
    char *arr[100] = {};

    // taking variables for the iteration algorithm
    int x = 0;
    int indi = 0;
    int indf = 0;
    int first = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        char temp[100];
        if (s1[i] == s2)
        {
            cout << i << endl;
            indf = i;
            for (int j = indi; j < indf; j++)
            {
                // appending characters of tokens in (temp)
                temp[j] = s1[j];
                first++;
                indi++;
            }

            if (first > 0)
            {
                for (int k = indi; k < indf; k++)
                {
                    temp[k] = s1[k];
                }
            }

            // appending (tokens) in (arr)
            arr[0] = temp;
            x++;
        }
    }
}

int main()
{
    char t1[] = "Test String this";
    char **r;
    int size = 0;

    StrTok(t1, ' ', r, size);

    return 0;
}