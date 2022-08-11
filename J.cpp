#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N, i, j, count;
    cin>>N;
    for( i=2; i<=N; i++ )
    {
        count=0;
        for( j=2; j<i; j++ )
        {
            if( i%j==0 )
        {
            count=1;
            break;
        }
        }
        if( count==0 )
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
