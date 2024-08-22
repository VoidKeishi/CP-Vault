#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    string line;
    cin >> r >> c;
    for (int i=1;i<=r;i++){
        cin >> line;
        int count = 0;
        for (int j=0;j<=c;j++){
            if (line[j]=='.') count++;
            else count = 0;
            if (count==3) {
                cout << i << " " << j-1;
            return 0;
            }
        }
    }
    return 0;
}