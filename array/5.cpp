#include<bits/stdc++.h>
using namespace std;

void soln(vector<int>sample)
{
    int f;
    int s=0;
    unordered_map<int,int>m;
    for (int i = 0; i <sample.size(); i++)
    {   
        s=s+sample[i];
        if(s==0 or m[s] or sample[i]==0)
        {
            f=1;
            break;
        }
        else
        {
            m[s]=1;
        }
    }
    if(f==1)
    cout<<"subarray with sum equal to zero exist"<<endl;
    else
    cout<<"subarray with sum equal to zero does not exist"<<endl;
    
}

int main()
{   
    vector<int>sample {4,2,-3,1,6};
    soln(sample);
    return 0;
}



// brute force using two loop

// int f=0;
// for (int i=0;i<n; i++)
// int s=0;
// for (int j=i;j<n;j++)
// {
// s=s+a[j];
// if(s==0){
// f=1;
// break;
// }
// if(f==1)//outer loop
// breaks
// if(f==1)
// cout«"Yes \n";
// else
// cout<<"No\n";
// }

// o(n²) and o(n)solution