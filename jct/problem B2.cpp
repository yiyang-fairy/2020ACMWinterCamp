#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        if(n==0&&x==0) break;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        a[n]=x;
       for(int i=n-1;i>=0;i--)
       {
           if(a[i]<=a[i+1]) break;
           swap(a[i],a[i+1]);
       }
        for(int i=0;i<n+1;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

}
