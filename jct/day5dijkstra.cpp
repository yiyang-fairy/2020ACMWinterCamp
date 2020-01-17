#include<bits/stdc++.h>
using namespace std;

int dis[100];
int book[100];
int e[100][100];
int INF=1e8;
int m,n;
int from,to,w;

int main()
{
    freopen("p.in","r",stdin);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            if(i==j) e[i][j]=0;
            else e[i][j]=INF;
        }
    for(int i=1;i<=m;i++)
    {

        cin>>from>>to>>w;
        e[from][to]=w;
    }
    for(int i=1; i<=n; i++)
        dis[i]=e[1][i];
    for(int i=1;i<=n;i++)

        book[i]=0;
        book[1]=1;

    for(int i=1;i<=n-1;i++)
    {
        int Min=INF;
        int u=1;
        for(int j=1;j<=n;j++)
        {
            if(book[j]==0&&dis[j]<Min)
            {
                Min=dis[j];
                u=j;
            }
        }
        book[u]=1;
        for(int k=1;k<=n;k++)
        {
            if(e[u][k]<INF)
                dis[k]=min(dis[u],e[u][k]);
        }
    }
    for(int i=1;i<=n;i++)
        cout<<dis[i]<<" ";

    return 0;
}
