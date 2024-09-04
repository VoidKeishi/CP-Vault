#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q,count,now;
    int a[100000];
    cin >> n >> p >> q;
    now = p;
    count = 1;
    // cout << -1; 26 case
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]>0) now+=a[i];
        else if (a[i]<0) now -= min(now,-a[i]);
        if (now<=q){
            cout << count;
            return 0;
        }
        count++;
    }
    int diff = p - now;
    // 20
    if (diff <= 0){
        cout << 0;
        return 0;
    }
    count += ((now-q)/diff) * n;
    now -= ((now-q)/diff)*diff;
    int i = 0;
    while (now > q){
        if (a[i]>0) now+=a[i];
        else if (a[i]<0) now -= min(now,-a[i]);
        if (now<=q){
            cout << count;
            return 0;
        }
        count++;
        i++;
    }
    cout << count;
    return 0;
}