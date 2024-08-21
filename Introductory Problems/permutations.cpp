#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 4 && n != 1) {
        cout << "NO SOLUTION";
    } else {
        string permutation = "";
        // Add even numbers first
        for (int i = 2; i <= n; i += 2) {
            permutation += to_string(i) + " ";
        }
        // Add odd numbers next
        for (int i = 1; i <= n; i += 2) {
            permutation += to_string(i) + " ";
        }
        cout << permutation;
    }
    return 0;
}