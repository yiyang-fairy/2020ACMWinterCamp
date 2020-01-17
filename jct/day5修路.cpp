#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int u,v;
    int w;
} node[100+10];
int F[100+10];
int n;

bool cmp(Node a,Node b)
{
    return a.w < b.w;
}

int GetF(int x)
{
    if(F[x] == x)
        return x;
    F[x] = GetF(F[x]);
    return F[x];
}

int main()
{
    while(cin >> n)
    {
        if(n == 1)
            break;

        for(int i = 1; i <= n; i++)
        {
            cin >> node[i].u >> node[i].v >> node[i].w;
            F[i] = i;
        }
        sort (node + 1,node+1+n, cmp);
        for (int i = 1;i <= n;i++)
        cout << node[i].u << ' ' << node[i].v << ' ' << node[i].w << endl;
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            int tu=GetF(node[i].u);
            int tv=GetF(node[i].v);
            if(tu != tv)
            {
                F[tu]=tv;
                sum += node[i].w;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
