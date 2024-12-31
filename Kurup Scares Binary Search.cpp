#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define int long long

string Chis(int n)
{
    string s="";
    while(n>0)
    {
        s=to_string(n%8)+s;
        n/=8;
    }
    return s;
}

signed main()
{

    int T=0;

    cin>>T;
    for(; T--;)
    {
        int n;
        cin>>n;
        string s=Chis(n);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>'6')
            {
                cout<<s[i]-'0'+2;
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

