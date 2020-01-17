#include<bits/stdc++.h>
using namespace std;

int data[1000000],head=0,tail=-1;
int a[100000];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        data[++tail]=a[i];
    }
    while(head<=tail)
    {
        cout<<data[head++]<<" ";
        int x;
        x=data[head++];
        data[++tail]=x;
    }
    return 0;
}
