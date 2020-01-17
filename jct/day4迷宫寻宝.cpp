#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,ex,ey;
int Next[4][2]= {{0,1},{0,-1},{-1,0},{1,0}};

struct note
{
    int x;
    int y;

} que[100*100+10];
int head,tail;
char G[100+10][100+10];
int book[100+10][100+10];
int bfs(int x,int y)
{
    memset(book,0,sizeof(book));
    head=1;
    tail=1;
    que[tail].x=x;
    que[tail].y=y;
    tail++;
    book[x][y]=1;
    while(head<tail)
    {
        note now=que[head];
        head++;
        if(now.x==ex&&now.y==ey)
            return 1;
        for(int i=0; i<4; i++)
        {
            int tx=now.x+Next[i][0];
            int ty=now.y+Next[i][1];
            if(tx<1||tx>n||ty<1||ty>m)
                continue;
            if(book[tx][ty]==1||G[tx][ty]=='#')
                continue;
            book[tx][ty]=1;
            que[tail].x=tx;
            que[tail].y=ty;
            tail++;
        }
    }
    return -1;
}
int main()
{
    //freopen("aa.txt","r",stdin);
    while(cin>>n>>m)
    {
        if (n==0&&m==0)
            break;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
              {
                  cin>>G[i][j];
                  if(G[i][j]=='S')
                  {
                      sx=i;
                      sy=j;
                  }
                  if(G[i][j]=='G')
                  {
                      ex=i;
                      ey=j;
                  }
              }
        int ans=bfs(sx,sy);
        if (ans==-1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
