#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int solve (int n) {
    if( n == 0) return 0;
    else return solve(n-1) + n;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        cout << solve(10) << nl;
    }
    return 0;
}