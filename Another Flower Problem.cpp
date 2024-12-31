#include <bits/stdc++.h>
#define int long long

using namespace std;

vector<int>line(1e7+2,0);

void solve()
{
    int n,m=-1;
    cin>>n;
    int i,l,r,k;
    for(i=0;i<n;i++)
    {
        cin>>l>>r>>k;
        m=max(m,r+1);
        line[l]+=k;
        line[(r+l)/2]-=(ceil((double)k/(double)2));
        line[r+1]-=k/2;
    }
    int v=line[0],index=0;
    for(i=1;i<=m;i++)
    {
        line[i]=line[i-1]+line[i];
        if(line[i]>v)
        {
            v=line[i];
            index=i;
        }
    }
    cout<<index;
}
int32_t main()
{
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
