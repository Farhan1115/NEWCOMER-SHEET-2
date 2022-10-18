#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, space, N;
    cin>>N;
    for( row=1; row<=N; row++ )
    {
        for( space=N-row; space>=1; space-- )
        {
            cout<<" ";
        }
        for( col=1; col<=2*row-1; col++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for( row=N; row>=1; row-- )
    {
        for( space=1; space<=N-row; space++ )
        {
            cout<<" ";
        }
        for( col=1; col<=2*row-1; col++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
