#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int>a(n);
    long long int i = 0;

    for(i=0; i<n; i++)
    {
        cin >> a[i];

    }
    vector<long long int>res;
    for(i=0; i<n; i++)
    {
        if(a[i]==2)
        {
            res.push_back(i);
        }
    }
    long long int p = 1;
    if(res.size()==0)
    {
        cout << 0 << endl;
    }
    else if(res.size()==1)
    {
        cout << 1 << endl;
    }
    else
    {
        for(i=0; i<res.size()-1; i++)
        {
            p = (p * (res[i+1]-res[i])) % 998244353;
        }
        cout << p << endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }

    return 0;
}
