#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. All Distinct 

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        mp[x]++;
    }

    int ans = 0, cnt = 0;
    for(auto p : mp) {
        if(p.second % 2 == 0)
            cnt++;
        else 
            ans += (p.second % 2);
    }

    if(cnt % 2 == 0) 
        ans += cnt;
    else 
        ans += cnt - 1;

    cout << ans << "\n";
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
