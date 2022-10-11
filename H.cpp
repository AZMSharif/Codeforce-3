#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,tem;
    cin>>n;
    int x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++){
        if(x[i]<x[j])
        {
            tem=x[j];
            x[j]=x[i];
            x[i]=tem;
        }
    }
}
 for(i=0; i<n; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}
