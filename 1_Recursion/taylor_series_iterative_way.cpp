#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

double e(int x, int n){
    double s = 1;
    int i;
    double num = 1;
    double dem = 1;
    for(int i = 1; i <= n; i++){
        num *= x;
        dem *= i;
        s += num/dem;
    }
    return s;
}

int32_t main()
{
    optimize();
    cout << e(2,10) << nl;
    return 0;
}