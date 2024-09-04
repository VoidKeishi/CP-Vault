#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int sum = n*(n+1)/2;
    if (sum%2==1||n==1) cout << "NO";
    else {
        cout << "YES" << "\n";
        bool set[1000000];
        int count=0;
        long long int half_sum = sum/2;
        for (int i=n;i>0;i--){
            if (half_sum > i){
                half_sum-=i;
                set[i]=true;
                count++;
            }
            else {
                set[half_sum]=true;
                count++;
                break;
            }
        }
        cout << count << "\n";
        for (int i=1;i<=n;i++){
            if (set[i]) cout << i << " ";
        }
        cout << "\n" << n-count << "\n";
        for (int i=1;i<=n;i++){
            if (!set[i]) cout << i << " ";
        }
    }
    return 0;
}