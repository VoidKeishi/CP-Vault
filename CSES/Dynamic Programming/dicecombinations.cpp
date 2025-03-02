#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int dp[n+1]={};
    int MOD=1e9+7;
    dp[0] = 1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=min(6,i);j++){
            dp[i] = (dp[i]%MOD+dp[i-j]%MOD)%MOD;
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}