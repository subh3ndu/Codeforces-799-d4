#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

// XOR Mixup

void solve() {
    int n;
    cin >> n;
    vector<int> cnt(10);

    for(int i=0; i<n; i++) {
        int x; 
        cin >> x; 
        cnt[x % 10]++;
    }

    vector<int> v;
    for(int i=0; i<10; i++) {
        for(int j=0; j<min(cnt[i], 3); j++) {
            v.push_back(i);
        }
    }

    int m = v.size();
    for(int i=0; i<m; i++) {
        for(int j=i+1; j<m; j++) {
            for(int k=j+1; k<m; k++) {
                if((v[i] + v[j] + v[k]) % 10 == 3) {
                    cout << "YES\n";
                    return ;
                }
            }
        }
    }
    cout << "No\n";
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc=1;
	cin >> tc;
	for(int i=1; i<=tc; i++) {
		/* cout << "Case #" << i << ": "; */
		solve();
	}

	return 0;
}
