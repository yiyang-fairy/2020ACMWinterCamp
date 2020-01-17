#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int a[10]= {6,1,2,7,9,3,4,5,10,8};
    int i=1,j=9;
    while(i<j)
    {
        while(a[i]<a[0])
            i++;
        while(a[j]>a[0])
            j--;
        swap(a[i],a[j]);
    }
    swap(a[0],a[i]);

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}



