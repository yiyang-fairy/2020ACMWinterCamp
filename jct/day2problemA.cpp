#include<bits/stdc++.h>
using namespace std;

int n,m,v[100000],w[100000],f[1000];
int main()
{

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++)
        cin >> w[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = m; j >= v[i]; j--)
        {
            f[j] = max(f[j],f[j-v[i]]+w[i]);
        }
    }
    int ans = 0;
    for(int i = 0; i <=m; i++)
        ans = max(ans,f[i]);
    cout << ans <<endl;
    return 0;
}
