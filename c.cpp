#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Where's the Bishop ?

void solve() {
    char a[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(a[i][j] == '#' && a[i+1][j] == '.' && a[i+2][j] == '#'){
                cout << i+2 << " " << j+2 << "\n";
                break;
            }
        }
    }
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
