#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N, Max;
    cin>>N;
    int X[N];
    for( int i=0; i<N; i++ )
    {
        cin>>X[i];
    }
    Max = X[0];
    for( int i=0; i<N; i++ )
    {
        if( Max<X[i] )
        {
            Max = X[i];
        }
    }
    cout<<Max<<endl;
    return 0;
}
