#include <bits/stdc++.h>
using namespace std;

void threewaypartition(vector<int> arr, int a, int b)
{
    int left = 0;
    int right = arr.size() - 1;
    int i = 0;
    for (int i = 0; i <= right; i++)
    {
        if (arr[i] < a)
        {
            swap(arr[left], arr[i]);
            left++;
        }
        else if (arr[i] > b)
        {
            swap(arr[right], arr[i]);
            right--;
            i--;
        }
    }
    cout << "-----after three way partioning the output is--------" << endl;
    for (int j = 0; j < arr.size(); j++)
        cout << arr[j] << " ";
}

int main()
{
    vector<int> arr{5, 7, 1, 6, 3};
    int a = 2;
    int b = 3; 
    //  3 1 6 7 5
    threewaypartition(arr, a, b);
    return 0;
}


// https://www.youtube.com/watch?v=QtpTDMBJqH0