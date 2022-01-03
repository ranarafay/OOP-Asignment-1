#include <iostream>
using namespace std;

void StrSwapIn2DArray(char **s1, int numberOfRows, int swapIndex0, int swapIndex1)
{
    
    
}

int main()
{
    char **t11 = new char *[6];
    t11[0] = new char[5];
    t11[0][0] = 'T';
    t11[0][1] = 'h';
    t11[0][2] = 'i';
    t11[0][3] = 's';
    t11[0][4] = '\0';
    t11[1] = new char[3];
    t11[1][0] = 'i';
    t11[1][1] = 's';
    t11[1][2] = '\0';
    t11[2] = new char[4];
    t11[2][0] = 't';
    t11[2][1] = 'h';
    t11[2][2] = 'e';
    t11[2][3] = '\0';
    t11[3] = new char[6];
    t11[3][0] = 'f';
    t11[3][1] = 'i';
    t11[3][2] = 'r';
    t11[3][3] = 's';
    t11[3][4] = 't';
    t11[3][5] = '\0';
    t11[4] = new char[4];
    t11[4][0] = 'O';
    t11[4][1] = 'O';
    t11[4][2] = 'P';
    t11[2][3] = '\0';
    t11[5] = new char[11];
    t11[5][0] = 'a';
    t11[5][1] = 's';
    t11[5][2] = 's';
    t11[5][3] = 'i';
    t11[5][4] = 'g';
    t11[5][5] = 'n';
    t11[5][6] = 'm';
    t11[5][7] = 'e';
    t11[5][8] = 'n';
    t11[5][9] = 't';
    t11[5][10] = '\0';


    StrSwapIn2DArray(t11,6, 2,5);

    return 0;
}