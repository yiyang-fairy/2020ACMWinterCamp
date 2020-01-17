#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int j=0;

    int t;
    while(cin>>t)
    {
        a[j++]=t;

    }
    for(int i=0; i<j; i++)
    {

        cout<<a[i]<<" ";
    }
    int flag=0;
    for(int i=j-2; i>=0; i--)
        if(a[i]>a[i+1])
        {
            flag=1;
            break;

        }
    if(flag)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
