#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
//�����㷨���û�������ȽϷ���
int main() {
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];

    for(int i=0;i<n;i++){
        /// �Ѿ������i��Ԫ��
        ///��a[i]���뵽һ����ȷ��λ��

        for(int j=i-1;j>=0;j--){
             if(a[j]<=a[j+1])break;
             swap(a[j],a[j+1]);
        }


    }




    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
/**
 Input:
 10
 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */


