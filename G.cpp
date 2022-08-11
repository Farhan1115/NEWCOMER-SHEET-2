#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, N, T;
    cin>>T;
    for( i=1; i<=T; i++ )
    {
        cin>>N;
        long long int F = 1;
        for( int j=1; j<=N; j++ )
        {
            F = F*j;
        }
        cout<<F<<endl;
    }
    return 0;
}
