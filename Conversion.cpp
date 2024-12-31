#include <bits/stdc++.h>
using namespace std;
#define int long long

string Chis(int n, int k) {
    if (n == 0) return "0";
    string s = "";
    while (n > 0) {
        s.push_back('0' + (n % k));
        n /= k;
    }
    reverse(s.begin(), s.end());
    return s;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << Chis(n, k) << '\n';
    }
    return 0;
}
