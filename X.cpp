#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, i, N;
    cin>>T;
    string S;
    for( i=1; i<=T; i++ )
    {
        cin>>N;
        long long int r, temp = N, binary=0, j=0, decimal=0, Count=0;
        while( temp!=0 )
        {
            r = temp%2;
            temp = temp/2;
            if( r==1 )
            {
                Count++;
            }
        }
        for( j=0; j<Count; j++ )
        {
            decimal = decimal+pow(2,j);
        }
        cout<<decimal<<endl;
    }
    return 0;
}
