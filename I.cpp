#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum=0, temp, r;
    cin>>N;
    temp = N;
    while( N!=0 )
    {
        r = N%10;
        N = N/10;
        sum = sum*10+r;
    }
    cout<<sum<<endl;
    if( sum==temp )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
