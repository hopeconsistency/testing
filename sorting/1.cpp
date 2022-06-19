#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k];
    }

    return 0;
}


//https://www.youtube.com/watch?v=bBQkErahU9c&t=688s
//loop condition are generalised 
//small sample lekar 
//largest element 1st iteration ke bad last mai
//2nd largest 1st last mai after 2nd
//no need to check those already sorted j < n-i-1 karke j ko rok rahe
//piche se sorted hote jayega