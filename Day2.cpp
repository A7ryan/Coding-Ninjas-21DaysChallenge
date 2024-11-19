#include<bits/stdc++.h>
using namespace std;

int a = 0;
int b = 1;

int with_recursion(int);
int without_recursion(int);

int main()
{
        
        int n;
        cin >> n;

        if(n == 1 || n == 2) {
                cout << 1;
                return 0;
        }

        // WithOuT Recurson
        // int x = without_recursion(n);

        // With Recursion
        int x = with_recursion(n-1);
        
        cout << x << endl;
        return 0;
}

int with_recursion(int n) {
    if(n < 2) {
        return 1;
    }
    int a = with_recursion(n - 1);
    int b = with_recursion(n - 2);
    int sum = a+b;
    return sum;
}

int without_recursion(int n) {
        for(int i = 0; i < n; i++) {
                int sum = a + b; // 0 + 1 = 1
                b = a;
                a = sum;
        }
        return a;
}
