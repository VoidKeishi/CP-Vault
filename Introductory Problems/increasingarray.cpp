#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[200000];
    long long int count = 0;
    cin >> a[0];
    for (int i = 1; i<n;i++){
        cin >> a[i];
        if (a[i]<a[i-1]) {
            count += a[i-1]-a[i];
            a[i]=a[i-1];        
        }
    }
    cout << count;
    return 0;
}