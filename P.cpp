#include<bits/stdc++.h>
using namespace std;

//Shape1
int main()
{
    int N, row, col;
    cin>>N;
    for( row=N; row>=1; row-- )
    {
        for( col=1; col<=row; col++ )
        {
            cout<<"*";
        }
        cout<<"\n);
    }
    return 0;
}
