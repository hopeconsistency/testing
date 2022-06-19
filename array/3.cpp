#include<bits/stdc++.h>
using namespace std;

void soln(int arr[],int n, int k)
{   
    unordered_map<int,int> map;

    for (int i = 0; i < n; i++)
    {
       map[arr[i]]=map[arr[i]]+1;
       if(map[arr[i]]>2)
       {
           cout<<arr[i];
           cout<<endl;
           map[arr[i]]=-1000;
       }
    }
}

int main()
{   int arr[8]={3, 1, 2, 2, 1, 2, 3, 3};
    int n=8;
    int k=4;
    soln(arr,n,k);
    return 0;
}