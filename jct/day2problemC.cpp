#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int f[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++)
        cin>>a[i][j];
    f[0][0] = a[0][0];
    for(int i=1;i<n;i++)
        {
            f[i][0]=a[i][0]+f[i-1][0];
            f[i][i]=a[i][i]+f[i-1][i-1];
            for(int j=1;j<i;j++)
                f[i][j]=a[i][j]+max(f[i-1][j-1],f[i-1][j]);
        }
        int k=0;
        for(int i=0;i<n;i++)
            k=max(k,f[n-1][i]);
        cout<<k<<endl;
    return 0;
}
