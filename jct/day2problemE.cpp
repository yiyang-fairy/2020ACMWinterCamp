#include<bits/stdc++.h>
using namespace std;
int x[1000+1],y[1000+1];
int main()
{
    x[1]=1;
    y[1]=1;
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        x[i]=(x[i-1]+y[i-1])%1000000007;
        y[i]=x[i-1];
    }
    int sum;
    sum=(x[n]+y[n])%1000000007;
    cout<<sum;
    return 0;
}
