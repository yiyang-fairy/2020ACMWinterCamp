#include<bits/stdc++.h>
using namespace std;
int N,M;
int G[1000+10][1000+10];
int INF=1e8;
int main()
{
    freopen("p.in","r",stdin);
    while(cin>>N>>M)
    {
        if(N==0&&M==0)
            break;
        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++)
            {
                if(i==j) G[i][j]=0;
                G[i][j]=INF;
            }

        for(int i=1; i<=M; i++)
        {
            int from,to,w;
            cin>>from>>to>>w;
            G[from][to]=G[to][from]=w;
        }
        for(int k=1; k<=N; k++)
            for(int i=1; i<=N; i++)
                for(int j=1; j<=N; j++)
                    G[i][j]=min(G[i][j],G[i][k]+G[k][j]);

        cout<<G[N][1]<<endl;
    }
}

