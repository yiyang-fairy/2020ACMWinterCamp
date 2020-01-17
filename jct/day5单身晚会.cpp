#include<bits/stdc++.h>
using namespace std;
int N,P,C;
int p[1000];
int G[1000][1000];
int INF=1e8;
/*void oo(){
    for(int i=1;i<=P;i++){
        for(int j=1;j<=P;j++)
        cout<<G[i][j]<<" ";
        cout<<endl;
    }
}*/
int main()
{
    //freopen("f.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {

        cin>>N>>P>>C;
        for(int i=1; i<=P; i++)
        {
            for(int j=1; j<=P; j++)
            {
                if(i==j) G[i][j]=0;
                else G[i][j]=INF;
            }
        }
       // oo();
        for(int i=1; i<=N; i++)
            cin>>p[i];
        for(int i=1; i<=C; i++)
        {
            int from,to,w;
            cin>>from>>to>>w;
            G[from][to]=G[to][from]=w;
        }
      //  oo();
        for(int k=1; k<=P; k++)
            for(int i=1; i<=P; i++)
                for(int j=1; j<=P; j++)
                   G[i][j]=min(G[i][j],G[i][k]+G[k][j]);

        int best=INF;

        for(int i=1; i<=P;i++)
        {
            //p[1]~p[n]
            int sum=0;
            for(int k=1; k<=N; k++)
                sum+=G[i][p[k]];
            best=min(best,sum);

        }
        cout<<best<<endl;
    }
    return 0;
}
