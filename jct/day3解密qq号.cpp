#include<bits/stdc++.h>
using namespace std;

int data[1000000],head=0,tail=-1;

int main()
{
    int n,t;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        data[++tail]=t;
    }
    while(tail>=head)
    {
        cout<<data[head++]<<" ";
        if(head>tail)
            break;
        int x=data[head++];
        data[++tail]=x;
    }
}
