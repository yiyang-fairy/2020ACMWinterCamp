#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long f[51];
    f[0]=0;
    f[1]=1;
    f[2]=1;
    for(int i=3; i<51; i++)
        f[i]=f[i-1]+f[i-2];
    int n;
    cin>>n;
    cout<<f[n]<<endl;
    return 0;

}

