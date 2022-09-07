#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, row, i, num=1;
    cin>>N;
    for( row=1; row<=N; row++ )
    {
        for( i=1; i<=3; i++ )
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"PUM\n";
        num+=1;
    }
    return 0;
}
