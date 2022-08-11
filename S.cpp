#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, X, Y, i, j, sum;
    cin>>T;
    for( i=1; i<=T; i++ )
    {
        cin>>X>>Y;
        sum = 0;
        //Y>=X
        if( Y>=X )
        {
            for( j=X+1; j<Y; j++ )
        {
            if( j%2!=0 )
            {
                sum = sum+j;
            }
        }
        }
        //X>Y
        else
        {
           for( j=Y+1; j<X; j++ )
        {
            if( j%2!=0 )
            {
                sum = sum+j;
            }
        }
        }
        cout<<sum<<endl;
    }
    return 0;
}
