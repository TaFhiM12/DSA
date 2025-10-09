#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

//using iterative loop
int fib(int n){
    int t0=0 , t1 = 1;
    int s ;
    if(n <= 1) return n;
    for(int i = 2; i <= n; i++){
        s = t0 + t1;
        t0 = t1 , t1 = s ;
    }
    return s;
}

//using recursion
int rfib(int n) {
    if(n<=1) return n;
    return rfib(n-2) + rfib(n-1);
}

//using memoization
int F[10];
int mfib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mfib(n-1);
        }
        return F[n-2] + F[n-1];
    }
}

int32_t main()
{
    optimize();
    for(int i=0 ; i < 10; i++) F[i] = -1;
    cout << mfib(5) << nl;
    return 0;
}