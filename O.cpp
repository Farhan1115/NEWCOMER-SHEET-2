#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, N;
    cin>>N;
    for( row=1; row<=N; row++ )
    {
        for( col=1; col<=row; col++ )
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
