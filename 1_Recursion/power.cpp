#include<iostream>
using namespace std;

int solve(int m, int n){
    if(n==0) return 1;
    return solve(m,n-1) * m;
}

int solve1 (int m, int n) {
    if( n == 0) return 1;
    if( n % 2 == 0) return solve1(m*m , n/2);
    else return m*solve1(m*m , ((n-1)/2));
}

int main () {
    int m , n; cin >> m >> n;
    int ans = solve1(m,n);
    cout << ans << endl;
    return 0;
}