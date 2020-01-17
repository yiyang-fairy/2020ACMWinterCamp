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
   int b[j];
   for(int i=0;i<j;i++)
    b[i]=a[i];
   sort(b,b+j);
   int flag=0;
   for(int i=0;i<j;i++)
    if(a[i]!=b[i])
   {
       flag=1;break;
   }
    if(flag)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
