#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void  solveB(int n );

void solve (int n) {
    if(n>0){
        cout << n << nl;
        solveB(n-1);
    }
}

void solveB(int n) {
    if(n > 1) {
        cout << n << nl ;
        solve(n/2);
    }
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        solve(20);
    }
    return 0;
}