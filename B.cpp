#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0,q;
    cin>>n;
    long long int a,p[n],i,x;
    for(i=0; i<n; i++)
    {
        cin>>p[i];
    }
    cin>>x;
    for(i=0; i<n; i++)
    {
        if(p[i]==x)
        {
            t=1;
            q=i;
            break;
        }
    }
    if(t==1)
    {
        cout<<q<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
