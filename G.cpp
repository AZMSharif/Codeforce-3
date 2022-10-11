#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    int x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<=(n/2); i++)
    {
        if(x[i]!=x[n-1-i])
        {
            flag=1;
            break;
        }
    }


    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
