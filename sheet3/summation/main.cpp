#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n ;
    long long sum = 0;
    cin >> n;
    int S[n];
    for(int i = 0 ; i < n ; i++){
        cin >> S[i];
        sum += S[i];
    }
    cout << abs(sum);
    return 0;
}