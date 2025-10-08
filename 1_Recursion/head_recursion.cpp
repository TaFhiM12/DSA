#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve (int n) {
    if(n>0){
        solve(n-1);
        cout << n << nl;
    }
}

int32_t main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while(t--){
        solve(3);
    }
    return 0;
}