#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve(int n) {
    if(n<=0) return;
    cout << n << nl;
    solve(n-1);
}

int32_t main()
{
    optimize();
    int n; cin >> n;
    solve(n);
    return 0;
}