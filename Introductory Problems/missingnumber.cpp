#include <iostream>
using namespace std;
int main(){
    int n;
    long long int sum = 0;
    cin >> n;
    for (int i=1; i<n; i++){
        int x;
        cin >> x;
        sum += x;
    }
    cout << (long long int)n*(n+1)/2 - sum;
    return 0;
}