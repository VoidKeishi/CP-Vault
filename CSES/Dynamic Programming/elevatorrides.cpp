#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int w[n];
    for (int i=0;i<n;i++){
        cin >> w[i];
    }
    pair<int,int> best[1<<n];
    best[0]={1,0};
    for (int i=1;i<(1<<n);i++){
        // Initialize worse than worst case: Take n+1 rides
        best[i] = {n+1,0};
        for (int j=0;j<n;j++){
            // If j-th person is in i-th subset
            if (i&(1<<j)){
                // Consider option for j-th person: Add to existing ride or new ride
                // Exclude j-th person first
                auto option = best[i^(1<<j)];
                if (option.second+w[j]<=x){
                    option.second += w[j];
                }
                else {
                    option.first ++;
                    option.second = w[j];
                }
                // Store better option based on number of rides
                best[i] = min(best[i],option);
            }
        }
    }
    cout << best[(1<<n)-1].first;
    return 0;
}