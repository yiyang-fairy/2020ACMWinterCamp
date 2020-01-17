#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10],n=10;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i-1;j>=0;j--)
    {

        if(a[j]<=a[j+1]) break;
        else swap(a[j],a[j+1]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
