#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,q,num;
    cin>>n>>q;
    ll arr[n+1];
    arr[0]=0;
    for(ll i=1;i<=n;i++) {
    cin>>arr[i];
    arr[i]+=arr[i-1];
    }
    ll sum=0;
    ll i;
    while(q--){
        cin>>num;
        sum+=num;
         i=upper_bound(arr+1,arr+n+1,sum) - (arr);
            if(i==n+1){
            i=1,sum=0;
        }
        cout<<n-i+1<<"\n";
        
    }
    return 0;
}
        
     