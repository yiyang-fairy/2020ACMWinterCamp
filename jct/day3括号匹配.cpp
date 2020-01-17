#include<bits/stdc++.h>
using namespace std;

char data[1000];
int top=-1;

int main()
{
    char a[1000];
    while(cin>>a)
    {
        int flag=1;
        for(int i=0; a[i]!='\0'; i++)
        {
            // int flag=1;
            if(a[i]=='(')
                data[top++]=a[i];
            else if(a[i]=')')
                if(top==-1||data[top]!='(')
                {
                    flag=0;
                    break;
                }
                --top;

        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
