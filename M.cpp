#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, i, x=0;
    cin>>A>>B;
    for( i=A; i<=B; i++ )
    {
        int a = i;
        if( i==4 || i==7 )
        {

            x++;
            cout<<i<<" ";
        }
        else if( i<100 )
        {
            int b = a%10;
            a = a/10;
            if( (a==4 || a==7) && (b==4 || b==7) )
            {

                x++;
                cout<<i<<" ";
            }
        }
        else if( i<1000 )
        {

            int b = a%10;
            a = a/10;
            int c = a%10;
            a = a/10;
            if( (a==4 || a==7) && (b==4 || b==7) && (c==4 || c==7) )
            {

                x++;
                cout<<i<<" ";
            }
        }
        else if( i<10000 )
        {

            int b = a%10;
            a = a/10;
            int c = a%10;
            a = a/10;
            int d = a%10;
            a = a/10;
            if( (a==4 || a==7) && (b==4 || b==7) && (c==4 || c==7) && (d==4 || d==7) )
            {

                x++;
                cout<<i<<" ";
            }
        }
        else if( i<100000 )
        {

            int b = a%10;
            a = a/10;
            int c = a%10;
            a = a/10;
            int d = a%10;
            a = a/10;
            int e = a%10;
            a = a/10;
            if( (a==4 || a==7) && (b==4 || b==7) && (c==4 || c==7) && (d==4 || d==7) && (e==4 || e==7) )
            {

                x++;
                cout<<i<<" ";
            }
        }
    }
    if( x==0 )
        {
            cout<<"-1";
        }
    cout<<endl;
    return 0;
}
