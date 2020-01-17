#include<bits/stdc++.h>
using namespace std;

int n,m;
int Next[4][2]= {{1,0},{-1,0},{0,1},{0,-1}};
struct Node
{
    int x;
    int y;
} que[100*100+10];
int G[100+10][100+10];
int head,tail;
int book[100+10][100+10];
void bfs(int x,int y)
{

    head=1;
    tail=1;
    que[tail].x=x;
    que[tail].y=y;
    tail++;
    book[x][y]=1;
    while(head<tail)
    {
        Node now=que[head];
        head++;
        for(int i=0; i<4; i++)
        {
            int tx,ty;
            tx=now.x+Next[i][0];
            ty=now.y+Next[i][1];
            if(tx<1||tx>n||ty<1||ty>m)
                continue;
            if(book[tx][ty]==1||G[tx][ty]==0)
                continue;
            que[tail].x=tx;
            que[tail].y=ty;
            book[tx][ty]=1;
            tail++;
        }


    }
}

int main()
{
    //freopen("a.txt","r",stdin);
    int N;
    cin>>N;
    while(N--)
    {
          memset(book,0,sizeof(book));
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin>>G[i][j];
        int cnt=0;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                if(book[i][j]==0&&G[i][j])
                {
                    cnt++;
                    bfs(i,j);
                }
            }
        cout<<cnt<<endl;
    }
    return 0;
}
