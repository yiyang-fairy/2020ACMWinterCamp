#include<bits/stdc++.h>
using namespace std;
int a[5] = {1,2,4,5,10};
int f[1000];
int main()
{
    memset(f, 0x3f3f3f3f, sizeof(f));
    int n;
    cin >> n;
    f[0] = 0;
    for(int i = 0; i < 5; i++)
        for(int j = a[i]; j <= n; j++)
            f[j] = min(f[j],f[j-a[i]]+1);
    cout << f[n] <<endl;
    return 0;
}
