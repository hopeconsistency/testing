#include<bits/stdc++.h>
using namespace std;

void minmerge(int arr[],int size)
{
int i=0;
int j=size-1;
int ans=0;
while (i<j)
{
    if(arr[i]==arr[j])
    {
        i++;
        j--;
    }
    else if(arr[i]<arr[j])
    {
        i++;
        arr[i]=arr[i]+arr[i-1];
        ans=ans+1; 
    }
    else if(arr[i]>arr[j])
    {
     j--;
     arr[j]=arr[j]+arr[j+1]; 
     ans=ans+1;
    }
}
cout<<"Min operation needed is "<<ans<<endl;
}



int main()
{   int arr[4]={11, 14, 15, 99};
    int size=sizeof(arr)/sizeof(arr[0]);
    minmerge(arr,size);
    return 0;
}