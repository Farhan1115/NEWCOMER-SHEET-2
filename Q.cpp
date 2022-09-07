#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i;
    string N;
    cin>>T;
    for( int j=1; j<=T; j++ )
    {
        cin>>N;
        int x = N.size();
        for( int i=x-1; i>=0; i-- )
        {
            cout<<N[i];
            if( i>0 )
            {
                cout<<" ";
            }
            if( i==0 )
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
