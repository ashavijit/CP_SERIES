#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n,k;
    cin>>n>>k;
    ll arr[n];
    
    for(int i = 0;i<n;i++) cin>>arr[i];
    ll l = 0,r = 1e18;
    
    while(l<r)
    {
        ll m = (l+r+1)/2;
        ll sum = 0;
        for(int i = 0;i<n;i++)
        {
            if(arr[i]>m) sum+=m;
            else sum+=arr[i];
        }
        
        if(sum/m>=k)
        {
            l = m;
        }
        else r = m-1;
    }
    cout<<l<<endl;
}