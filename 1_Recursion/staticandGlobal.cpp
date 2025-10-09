#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int fun(int n){
    static int x = 0;
    if(n>0){
        x++;
        return fun(n-1) + x ;
    }
    return 0;
}

int32_t main()
{
    optimize();
    int r ;
    r = fun(5);
    cout << r << nl;
    return 0;
}