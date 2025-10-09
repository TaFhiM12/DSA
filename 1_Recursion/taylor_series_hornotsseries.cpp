#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

double e(int x , int n){
    static double s;
    if( n == 0) return s;
    s = 1 + x*s/n;
    return e(x,n-1);
}

int32_t main()
{
    optimize();
    fraction(10);
    cout << e(2,10) << nl;
    return 0;
}