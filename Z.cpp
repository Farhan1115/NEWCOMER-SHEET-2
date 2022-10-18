#include<bits/stdc++.h>
using namespace std;

int main()
{
    int K, S, i, j, k, Count=0;
    cin>>K>>S;
    for( i=0; i<=K; i++ )
    {

        for( j=0; j<=K; j++ )
        {
            k = S - (i+j);
            //cout<<"K"<<k<<endl;
            if( k>=0 && k<=K && i+j+k==S )
            {
               Count++;
            }
        }
      }
    cout<<Count<<endl;
    return 0;
}
