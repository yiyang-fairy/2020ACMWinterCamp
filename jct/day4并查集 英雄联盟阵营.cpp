#include<bits/stdc++.h>
using namespace std;

int f[100+10];
int g[100+10]= {0};
int GetF(int x)
{
    if(f[x]==x)
        return x;
    f[x]=GetF(f[x]);
    return f[x];
}

int main()
{

    int n,m;
    int a[100],b[100];
    cin>>n>>m;
    for (int i = 1;i <= n;i++)
        f[i] = i;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i]>>b[i];
        a[i] = GetF(a[i]);
        b[i] = GetF(b[i]);
        f[a[i]]=b[i];
    }

    for(int i=1; i<=n; i++)
    {
        g[GetF(i)]++;
    }
    int sum=0;
    for(int i=1; i<=n; i++)
        if(g[i]>0)
            sum+=1;
    cout<<sum<<endl;

}
