#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,p,i,s=0;
    cin>>x;
    for(i=1; i<=x; i++)
    {
        int a[i];
        cin>>a[i];
        s=s+a[i];
    }
    p=abs(s);
    cout<<p<<endl;
    return 0;
}
