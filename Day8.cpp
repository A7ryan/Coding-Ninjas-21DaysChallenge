#include<iostream>
using namespace std;

int calcGCD(int n, int m){
    // Tc: O(log phi(min(n,m))) ~= O(log(N))
    // phi: n and m keeps fluctuating so
    // Sc: O(1)
    // Euclidean Algorithm
    while(n > 0 && m > 0) {
        if(n > m)
            n = n % m;
        else
            m = m % n;
    }

    return (m == 0) ? n : m;
}



int main() {
    int n = 20;
    int m = 40;
    int ans = calcGCD(n, m);
    cout << ans << endl;
    return 0;
}