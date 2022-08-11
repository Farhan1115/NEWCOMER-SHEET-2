#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, count=0;
    cin>>N;
    for( i=2; i<N; i++ )
    {
        if( N%i==0 )
        {
            count+=1;
            break;
        }
    }
    if( count==0 )
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
