#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool l[4],s[4],r[4],p[4];

int main()
{

    for(int i=0;i<4;i++)
    {
        cin>>l[i]>>s[i]>>r[i]>>p[i];
        if(p[i] and (l[i] or s[i] or r[i]))
        {
            cout<<"YES";return 0;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(p[i] and (s[(i+2)%4] or r[(i+3)%4] or l[(i+1)%4]))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

