#include<bits/stdc++.h>
using namespace std;
int w[1000],v[1000],f[10000];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>w[i];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
    {
        for(int j=w[i]; j<=m; j++)
            f[j]=max(f[j],f[j-w[i]]+v[i]);
    }
    int ans=0;
    for(int i=0; i<=m; i++)
        ans=max(ans,f[i]);
    cout<<ans<<endl;
    return 0;
}
