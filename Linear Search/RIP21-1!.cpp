#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p =0;

        
        if(n%21==0)
        {  
           p=1;
        }

      
        if(p==0)
        {
            while(n!=0)
            {
              int r=n%10;
              n=n/10;
              if(r==1)
              {
                  if(n%10==2)
                  {
                      p=1;
                      break;
                  }
              }

              }
        }
        if(p==1)
          cout<<"The streak is broken!"<<endl;
        else
          cout<<"The streak lives still in our heart!"<<endl;
          
    }
    return 0;
}