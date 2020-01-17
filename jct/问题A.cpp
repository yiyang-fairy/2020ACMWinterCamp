#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("aa.txt","r",stdin);
    int a[1000];
    fill(a, a + 1000, 0);
    int n,t;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        a[t]=1;
    }


    for (int i = 1; i <= 1000; i++)
    {

        if(a[i]==1)
            cout<<i<<" ";
    }
    return 0;
}




