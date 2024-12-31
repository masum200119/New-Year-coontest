#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int i,k;
    string a,b;
    cin>>a>>b>>k;
    long long num1=0;
    long long pow=1;
    for(i=a.size()-1;i>=max(0,(int)a.size()-5);i--)
    {
        num1=((a[i]-'0')*pow)+num1;
        pow=pow*10;
    }
    long long num2=0;
    pow=1;
    for(i=b.size()-1;i>=max(0,(int)b.size()-5);i--)
    {
        num2=((b[i]-'0')*pow)+num2;
        pow=pow*10;
    }
    long long res=(num1*num2);
    vector<int>vec(k,0);
    i=0;
    int cnt=0;
    while(res>0)
    {
        int r=res%10;
        cnt++;
        if(cnt>k) break;
        vec[i]=r;
        i++;
        res=res/10;
    }
    for(i=k-1;i>=0;i--) cout<<vec[i];
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
