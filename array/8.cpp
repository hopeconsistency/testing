#include<bits/stdc++.h>
using namespace std;

int soln(vector<int>arr,int k)
{
int n=arr.size();
int fav=0, nonfav=0;
for (int i=0; i<n; i++)
if(arr[i]<=k) fav++;
for(int j=0;j<fav;j++)
if(arr[j]>k) nonfav++;
int l=0;
int r=fav-1;
int result=INT_MAX;
while(r<n)
{
result=min(result,nonfav);
r++;//right shift ho rahe hai
if(r<n && arr[r]>k) nonfav++;
if(l<n && arr[l]>k) nonfav--;
l++;//removing pehlay wala 
}
if(result==INT_MAX)
{
    return 0;
}
else
{
    return result;
}
}

int main()
{   
    vector<int>a{2,1,5,6,3};
    int k=3;
    int ans=soln(a,k);
    cout<<ans;
    return 0;
}


 
//Algo Minimum swaps required bring elements less equal K together
//no of elements less than the k will be the size of windows 
//fav elements and non elements count 
//2 1 5 6 3 ,k=3
//window size-->3
//first window--2 1 5 here one non fav so one swap is needed 
//second window-- 1 5 6 -- here two non fav so two swap is needed 
// third windiw--5 6 3-here also two non fav so two swap is needed 
//keep on shifting right and keep on tracking non favs;

