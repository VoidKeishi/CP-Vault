#include <bits/stdc++.h>
#define MOD 1e9+7
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans=1;
    for (int i=0;i<n;i++){
        ans = (ans%MOD * 2)%MOD;
    }
    cout << ans;
    return 0;
}