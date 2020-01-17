#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,ex,ey;
int next[4][2]= {{0,1},{0,-1},{-1,0},{1,0}};

struct note
{
    int x;
    int y;
    int step;
} que[100*100+10];
int head,tail;
int G[100+10][100+10];
int book[100+10][100+10];
int bfs(int x,int y)
{
    memset(book,0,sizeof(book));
    head=1;
    tail=1;
    que[tail].x=x;
    que[tail].y=y;
    que[tail].step=0;
    tail++;
    book[x][y]=1;
    while(head<tail)
    {
        note now=que[head];
        head++;
        if(now.x==ex&&now.y==ey)
            return now.step;
        for(int i=0; i<4; i++)
        {
            int tx=now.x+next[i][0];
            int ty=now.y+next[i][1];
            if(tx<1||tx>n||ty<1||ty>m)
                continue;
            if(book[tx][ty]==1||G[tx][ty]==1)
                continue;
            book[tx][ty]=1;
            que[tail].x=tx;
            que[tail].y=ty;
            que[tail].step=now.step+1;
            tail++;
        }
    }
    return -1;
}
int main()
{

    while(cin>>n>>m)
    {
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin>>G[i][j];

        cin>>sx>>sy>>ex>>ey;
        int ans=bfs(sx,sy);
        if (ans==-1)
            cout<<"No Way!"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
