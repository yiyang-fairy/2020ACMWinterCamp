#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c[2][1000],m,a[1000],dp[100000];
    // memset(dp, 0x3f3f3f3f, sizeof(dp));
    cin>>n;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < n; j++)
            cin>>c[i][j];

    dp[0] = 0;
    int k=0;
    for(int i = 0; i < n; i++)
        k+=c[i][0]*c[i][1];
    cin>>m;
    if(m>k)
        dp[m] = -1;
    for(int i = 0; i < n; i++)
        for(int j = a[i]; j <=m; j++)
        {
            dp[j] = min(dp[j],dp[j-a[i]]+1);
        }
    cout << dp[m] << endl;
    return 0;

}

