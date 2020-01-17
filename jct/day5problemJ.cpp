#include<bits/stdc++.h>
using namespace std;
int n,m;
int p[1000];
int main()
{
    cin>>n>>m;
    int f,e;
    cin>>f>>e;
    for(int i=1;i<=m;i++)
       {
           int from,to;
           cin>>from>>to;
           p[from]++;
           p[to]++;

       }
    int tot=0;
    for(int i=1;i<=m;i++)
    {
        if(p[i]&1) tot++;
    }
    if(tot==0)
        cout<<"YES"<<endl;
    else if(tot>2)
        cout<<"NO"<<endl;
    else if((p[f]&1)&&(p[e]&1))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
