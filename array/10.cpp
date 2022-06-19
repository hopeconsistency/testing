#include <bits/stdc++.h>
using namespace std;

int minswap(string str)
{
    int swap = 0;
    int close = 0;
    int open = 0;
    int unbalanced=0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '[')
        {
            open++;
            if (unbalanced > 0)
            {
                swap = swap + unbalanced;
                unbalanced--;
            }
        }
        else
        {
            close++;
            unbalanced = close - open;
        }
    }
    return swap;
}

int main()
{
    string str = "[]][][";
    cout << minswap(str) << endl;
    return 0;
}