#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    int coin[100];
    cin >> n >> x;
    for (int i=0;i<n;i++){
        cin >> coin[i];
    }
    cout << solve(x);
    return 0;
}