#include <bits/stdc++.h>
using namespace std;
long long a[200005],s,t;
int main(){
	int n,m,a;
	cin>>n>>m>>a;
	int p[n],b[m];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p,p+n);
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(b,b+m);

	int low=0,high=min(n,m)-1;
	while(low<=high)
	{
		int md=(low+high)>>1;
        long long t=a;
        for(int i=0;i<=md&&t>=0;++i)
        {
        	t-=max(0,b[i]-p[n-1-md+i]);
        }
        if(t<0)
        
        {
        	high=md-1;
        
       	}
      	else 
      	{
        	low=md+1;
      	}
    }
    int s=0;
    for(int i=0;i<low;++i)
    {
     	s+=b[i];
    }
   
    int ans;
    if(low>0)
    {
    ans=max(0,s-a);
   	}
    else
    {
    	ans=0;
   	}
    cout<<low<<" "<<ans<<endl;
	
	
	return 0;
}

// problem link = "https://codeforces.com/contest/363/problem/D"