#include <iostream>
using namespace std;

// ******Recursion******

// replace pi by 3.14 in  given string 
void replace(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replace(s.substr(2));
    }

    else
    {
        cout << s[0];
        replace(s.substr(1));
    }
    
}


// reverse a string
void reverse (string s)
{
    if (s.length() == 0)
    {
        return;
    }
    
    string rest;
    rest = s.substr(1);
    reverse(rest);

    cout << s[0];
} 


// tower of hanoi
void towerofHanoi(int n, char src, char helper, char des)
{
    if (n == 0)
    {
        return;
    }
    
    towerofHanoi(n-1,src,des,helper);
    cout << "Move from " << src << " to " << des << endl;
    towerofHanoi(n-1,helper,src,des);
}

// move desrired character to the end of string
string movechar(string s, char c)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = movechar(s.substr(1),c);

    if (ch == c)
    {
        return ans + ch;
    }

    return ch + ans;

}

int main()
{
    // replace("pipipi");
    // reverse("rafay");
    // towerofHanoi(3,'A','B','C');
    // cout << movechar("raoranarafay",'r');

    return 0;
}