#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("a.txt","r",stdin);
    int n,a[9];
    int t;
    cin >> t;
    while(t--)
    {
        for(int i=0; i<=8; i++)
            cin>>a[i];
        for(int i=8; i>=0; i--)
        {
            if(a[i]<a[0])
                cout<<a[i]<<" ";
        }
        for(int i=8; i>=0; i--)
        {
            if(a[i]==a[0])
                cout<<a[i]<<" ";
        }
        for(int i=0; i<=8; i++)
            if(a[i]>a[0])
                cout<<a[i]<<" ";
        cout<<endl;

    }
    return 0;
}

