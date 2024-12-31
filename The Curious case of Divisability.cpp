
#include<bits/stdc++.h>
using namespace std;

int check(string str)
{
    int n = str.length();

    // Compute sum of even and odd digit
    // sums
    int oddDigSum = 0, evenDigSum = 0;
    for (int i=0; i<n; i++)
    {
        // When i is even, position of digit is odd
        if (i%2 == 0)
            oddDigSum += (str[i]-'0');
        else
            evenDigSum += (str[i]-'0');
    }

    // Check its difference is divisible by 11 or not
    return ((oddDigSum - evenDigSum) % 11 == 0);
}

signed main()
{

    int __=0;

    cin>>__;


    for(int i=1; __--; i++)
    {
        string str;
        cin>>str;
        if(check(str))
        {
            cout<<"Case "<<i<<": "<<"Yes"<<endl;

        }
        else
        {
            cout<<"Case "<<i<<": "<<"No"<<endl;

        }
    }
    return 0;
}
