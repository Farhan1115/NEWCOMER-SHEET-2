#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, i;
    int Even,Odd,Pos,Neg;
    Even=Odd=Pos=Neg=0;
    cin>>N;
    for( i=1; i<=N; i++ )
    {
        cin>>X;
        if( X%2==0 )
        {
            Even+=1;
        }
        else if( X%2!=0 )
        {
            Odd+=1;
        }
        if( X>0 )
        {
            Pos+=1;
        }
        else if( X<0 )
        {
            Neg+=1;
        }
    }
    cout<<"Even: "<<Even<<endl;
    cout<<"Odd: "<<Odd<<endl;
    cout<<"Positive: "<<Pos<<endl;
    cout<<"Negative: "<<Neg<<endl;
    return 0;
}
