#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    long long int A[N];
    A[0] = 0;
    A[1] = 1;
    for( int i=2; i<N; i++ )
    {
        A[i] = A[i-1] + A[i-2];
    }
    for( int i=0; i<N; i++ )
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
