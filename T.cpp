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
        for( col=row; col<=2*row-1; col++ )
        {
            cout<<"*";
        }

        for( col=1; col<row; col++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
