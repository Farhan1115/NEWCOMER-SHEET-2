#include<bits/stdc++.h>
using namespace std;

int main()
{
    char S;
    int N, i, j, X;
    cin>>S>>N;
    for( j=1; j<=N; j++ )
    {
        cin>>X;
        for( i=1; i<=X; i++ )
        {
            cout<<S;
        }
        cout<<endl;
    }
    return 0;
}
