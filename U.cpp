#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B, x, total=0, j, i=1, r, t;
    cin>>N>>A>>B;
    while(i<=N)
    {
        j=i;
        t = 0;
        while(j>0)
        {
            r = j%10;
            j = j/10;
            t+= r;
        }
        if( t>=A && t<=B )
        {
            total+=i;
        }
        i++;
    }
    cout<<total<<endl;

    return 0;
}
