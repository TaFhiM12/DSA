#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int solve (int n) {
    if(n > 100) {
        return n - 10;
    }

    else return solve(solve(n + 11));
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        cout << solve(95) << nl;
    }
    return 0;
}