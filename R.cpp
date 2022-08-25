#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, N, M;
    while(1)
    {
        int sum = 0;
        cin>>N>>M;
        if( N<=0 || M<=0 )
        {
            break;
        }
        if( N>M )
        {
            int temp = M;
            M = N;
            N = temp;
        }
        for( i=N; i<=M; i++ )
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}
