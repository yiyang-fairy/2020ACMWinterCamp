#include<bits/stdc++.h>
using namespace std;

char data[1000+10];
int top=-1;

int main()
{
    char a[1000+10];
    while(cin>>a)
    {
        top=-1;
        int flag=1;
        for(int i=0; a[i]!='\0'; i++)
        {
            if(a[i]=='('||a[i]=='['||a[i]=='{')
                data[++top]=a[i];
            else if(a[i]==')')
            {
                if(top==-1||data[top]!='(')
                {
                    flag=0;
                    break;
                }
                --top;
            }
            else if(a[i]==']')
            {
                if(top!=-1&&data[top]=='[')
                    --top;
                else
                {
                    flag=0;
                    break;
                }
            }
            else if(a[i]=='}')
            {
                if(top!=-1&&data[top]=='{')
                    --top;
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(top!=-1)
            flag=0;
        if(flag==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
