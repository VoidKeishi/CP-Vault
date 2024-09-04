#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,x,y;
    cin >> t;
    while (t>0){
        --t;
        cin >> x >> y;
        long long int mi = min(x,y);
        long long int ma = max(x,y);
        long long int ans = 1+ ma*(ma-1);
        if ((ma==x && x%2==0) || (ma==y && y%2==1)){
            ans += ma - mi;
        }
        else ans -= ma - mi;
        cout << ans << "\n";
    }
    return 0;
}