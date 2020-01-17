#include<bits/stdc++.h>
using namespace std;

int a[21];
int book[21];
int n,target;
int flag=0;//假设没找到
void dfs(int k)
{
    if(k>n||flag==1)
        return;
    if(k==n)
    {
        //TODO
        int s=0;
        for(int i=0; i<n; i++)
        {
            if(book[i])
                s+=a[i];

        }
        if(s==target)
        {
            cout<<"Of course,I can!"<<endl;
            flag=1;
        }
        return;
    }
    book[k]=0;//放弃a[k]
    dfs(k+1);
    book[k]=1;//select a[k]
    dfs(k+1);

}
int main()
{

    while(cin>>n)
    {
        fill(book,book+21,0);
        flag=0;
        target=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            target+=a[i];
        }
        if(target&1){
            cout<<"Sorry,I can't!"<<endl;
            continue;
        }
        target/=2;

        dfs(0);
        if(flag==0)
        {
            cout<<"Sorry,I can't!"<<endl;
        }

    }
    return 0;


}
