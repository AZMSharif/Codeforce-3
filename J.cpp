#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t=0,temp;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<a[0])
        {
            temp=a[i];
            a[i]=a[0];
            a[0]=temp;
        }
    }
        for(i=0; i<n; i++)
    {
        if(a[0]==a[i])
        {
            t++;
        }
    }
 
    if(t%2==0)
    {
        cout<<"Unlucky"<<endl;
    }
    else {
        cout<<"Lucky"<<endl;
         }
    return 0;
}
