#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Marathon
// Author: venom_61

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a < b) + (a < c) + (a < d) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}
