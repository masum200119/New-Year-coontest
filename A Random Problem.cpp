#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long i,j,n1,n2;
    cin>>n1>>n2;
    if(n1%2==0) n1++;
    if(n2%2==0) n2--;
    if(n1>n2) cout<<-1<<" "<<-1<<endl;
    else
    {
        long long a=-1,b=-1;
        bool ok=false;
        for(i=n1;i<=min(n2,n1+10);i++)
        {
            for(j=n2;n2-j<=min(n2-n1,(long long)10);j--)
            {
                if(i%2!=0 && j%2!=0 && __gcd(i,j)==1 && ((a==-1 && b==-1) || (j-i)>(b-a)))
                {
                    ok=true;
                    a=i;
                    b=j;
                }
            }
        }
        if(ok==true) cout<<a<<" "<<b<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
