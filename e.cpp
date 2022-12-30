#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> a, ps;

ll isGood(int l, int r) {
    return ps[r] - (l ? ps[l - 1] : 0);
}

void solve() {
    int n, s;
    cin >> n >> s;
    a.resize(n); ps.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ps[i] = a[i];
        if(i) ps[i] += ps[i - 1];
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        int l = i, r = n - 1, pos = -1;
        while(l <= r) {
            int mid = l + r >> 1;
            if(isGood(i, mid) <= s) {
                pos = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        if(pos == -1 or isGood(i, pos) != s) continue;
        ans = min(ans, n - (pos - i + 1));
    }

    cout << (ans == INT_MAX ? -1 : ans) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }

    return 0;
}
