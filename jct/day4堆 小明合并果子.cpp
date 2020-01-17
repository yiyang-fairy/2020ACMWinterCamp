#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int n,a[1000000+1];
LL heap[1000000+1];

void updatedown(int x)
{
    int p=x;
    int l=2*x,r=2*x+1;
    if(l<=n && heap[p]>heap[l])
        p=l;
    if(r<=n && heap[p]>heap[r])
        p=r;
    swap(heap[x],heap[p]);
    if(p!=x)
        updatedown(p);
    else return ;
}

void build()
{
    for(int i=n/2; i>=1; i--)
        updatedown(i);
}

LL top()
{
    return heap[1];
}


void pop()
{
    heap[1]=heap[n];
    n--;
    updatedown(1);
}

void Insert(int x)
{
    if (x < 1)
        return;
    if (heap[x/2] > heap[x])
    {
        swap(heap[x/2], heap[x]);
        Insert(x/2);
    }
    return;
}

int main()
{

    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        scanf("%lld", &heap[i]);
    build();
    LL sum=0;
    while(n>1)
    {
        LL a=top();
        pop();
        LL b=top();
        pop();
        sum += (a+b);
        n++;
        heap[n] = a+b;
        Insert(n);
    }
    cout<<sum<<endl;

    return 0;
}
