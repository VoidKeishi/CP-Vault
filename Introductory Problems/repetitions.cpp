#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string dna;
    int count = 1;
    int max = 1;
    cin >> dna;
    for (int i = 1; i < dna.length(); i++){
        if (dna[i] == dna[i-1]) count +=1;
        else count = 1;
        if (count > max) max = count;
    }
    cout << max;
}