/*
P200636
Rao Muhammad Rafay
*/

#include <iostream>
using namespace std;

void printstarspace(int start, int unique, int st, int sp)
{
    int printsp = start - 2;

    if (printsp == 0)
    {
        int spdone = 0;
        for (int i = 0; i < st; i++)
        {
            cout << "*";

            if (spdone == 0)
            {
                for (int j = 0; j < sp; j++)
                {
                    cout << " ";
                }
                spdone++;
            }
        }
    }

    if (printsp != 0 && start - 2 < unique)
    {
        int spdone = 0;
        int stdone = 0;
        int spstart = 0;

        // starts and end spaces
        for (int i = 0; i < printsp + 1; i++)
        {
            cout << " ";
            spstart++;

            // stars
            if (stdone == 0 && spstart == printsp)
            {
                for (int j = 0; j < st; j++)
                {
                    cout << "*";
                    stdone++;

                    // spaces
                    if (spdone == 0)
                    {
                        for (int k = 0; k < 5 - (printsp * 2); k++) // 4 3 1 1 3 4
                        {
                            cout << " ";
                            spdone++;
                        }
                    }
                }
            }
        }
    }

    cout << endl;

    return;
}

void PrintPattern3(int start, int end)
{
    int nolines = (end * 2) - 1;
    int unique = ((nolines - 1) / 2) + 1;

    // base condition
    if (start == nolines)
    {
        return;
    }

    if (start < unique)
    {
        printstarspace(start + 1, unique, 2, nolines - 2);
        PrintPattern3(start + 1, end);
    }

    // unique condition
    if (start == unique)
    {
        printstarspace(start + 1, unique, 1, nolines - 1);
        PrintPattern3(start + 1, end);
    }

    if (start > unique)
    {
        PrintPattern3(start + 1, end);
        printstarspace(start + 1, unique, 2, nolines - 2);
    }
}

int main()
{
    PrintPattern3(1, 4);

    return 0;
}