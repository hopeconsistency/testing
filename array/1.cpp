#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    for (int i = size-1; i >=0; i--)
    {
        cout<<arr[i];
        cout<<endl;
    }
    
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    return 0;
}