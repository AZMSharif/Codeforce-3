#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,n,t,x,q;
    cin>>q;
    for(k=1; k<=q; k++)
    {
    cin>>n;
    int x[n],p=0;
    for(i=0,j=0; i<n&&j<n; i++,j++)
    {
        cin>>x[i];
        x[i]=x[j];
    }
    for(i=0; i<n; i++)
    {

        int s=0;
        for(j=i+1; j<n; j++)
        {
            s=x[i]+x[j]+j-i;
           if(p==0)
           {
               p=s;
           }
           if(s<p)
           {
               p=s;
           }

        }

    }

    cout<<p<<endl;
}
return 0;
}
