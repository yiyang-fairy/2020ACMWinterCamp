#include<bits/stdc++.h>
using namespace std;
struct Frac
{
    int up;
    int down;

};
bool cmp(Frac &a,Frac &b)
{

    return a.up*b.down<b.up*a.down;
}
int main()
{
    int n;
    while(cin>>n){
    Frac f[n];
    for(int i=0; i<n; i++)
    {
        //cin>>f[i].up>>"/">>f[i].down;
        scanf("%d/%d",&f[i].up,&f[i].down);
        int g=__gcd(f[i].up,f[i].down);
        f[i].up/=g;
        f[i].down/=g;
    }
    sort(f,f+n,cmp);
    for(int i=0;i<n;i++)
        cout<<f[i].up<<"/"<<f[i].down<<endl;}

}
