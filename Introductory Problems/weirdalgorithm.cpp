#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    cout << n << " ";
    long long int i = n;
    while (i!=1){
        if (i%2==0){
            i = i >> 1;
        }
        else{
            i = 3*i + 1;
        }
        cout << i << " ";
    }
    return 0;
}